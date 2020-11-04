/* En un torneo de busqueda compiten 15 buceadores numerados del 1 al 15.
Mostrar tabla de posiciones actualizada y ordenada con cada captura hecha por un competidor.
El dato ingresado es el numero de buceador que logro una captura.
El ingreso de datos y la competencia finaliza con el ingreso de un numero de competidor negativo. */

#include <stdio.h>

#define N 15

void ordenar (int[], int[]);
void mirar (int[], int[]);

int main()
{
    int i, j, punto[N], codigo[N], competidor;

    // Inicializacion
    for (i = 0; i < N; i++)
    {
        punto[i] = 0;
        codigo[i] = i+1;
    }

    mirar (codigo, punto);

    // Ingresar primer codigo
    printf("\nIngrese codigo");
    scanf("%d", &competidor);
    
    while (competidor > 0)
    {
        // Busco competidor 
        for (i = 0; i < N; i++)
            if (competidor == codigo[i])
                punto[i]++;

        ordenar (codigo, punto);
        printf("\033[2J"); // borro pantalla
        mirar (codigo, punto);

        printf("\nIngrese codigo:");
        scanf("%d", &competidor);
    }
    
    return 0;
}

void mirar (int codigo[], int punto[])
{
    int i;
    printf("CODIGO \t\t PUNTOS \n\n");
    for (i = 0; i < N; i++)
        printf("\t\t %d \t\t %d \n", codigo[i], punto[i]);    
}

void ordenar (int codigo[], int punto[])
{
    int i, j, aux_cod, aux_punt;

    for (i = 0; i < N-1; i++)
        for (j = 0; j < N-i-1; j++)
            if (punto[j] < punto[j+1])
            {
                // swapping
                aux_punt = punto[j];
                punto[j] = punto[j+1];
                punto[j+1] = aux_punt;

                aux_cod = codigo[j];
                codigo[j] = codigo[j+1];
                codigo[j+1] = aux_cod;
            }
}

