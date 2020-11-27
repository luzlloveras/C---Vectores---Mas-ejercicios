// Realizar una funcion que simule arrojar un dado
// Retorna valores enteros aleatrorios entre 1 y 6
// Imprimir cantidad de veces que aparecio cada cara y porcentaje sobre el total

#include <stdio.h>
#include <stdlib.h>
#define N 1000
#define D 6

int DADO ();

int main()
{
    int i, contador[D], max = 0, posmax = 0;
    
    // Inicializa en 0 cada posicion del vector
    for (i = 0; i < D; i++)
        contador[i] = 0;
    
    // Simulacion de tiros del dado
    for (i = 0; i < N; i++)
        contador[DADO() - 1 ]++;

    // Imprime cantidad de veces que salio cada cara
    for (i = 0; i < D; i++)
        printf("\n cara %4d salio %d veces es %.2f %%", i+1, contador[i], (float)(contador[i]*100)/N);
    printf("\n");

    for (i = 0; i < D; i++)
        if (contador[i] > max)
        {
            max = contador[i];
            posmax = i;
        }
    printf("\n La cara que mas salio fue la %d con %d ocurrencias\n", posmax+1, max);

    return 0;
}

int DADO ()
{
    int tiro; 
    srand(0);
    tiro = 1 + rand() % 6;
    return tiro;
}
