// Realizar una funcion que reciba un vector de enteros y su longitud.
// La funcion retorna el promedio de sus valores.

#include <stdio.h>
#define num 5
void INGRESO (int [], int);
float PROMEDIO (int [], int);

int main()
{
    int vector[num];
    float prom;
    INGRESO (vector, num);
    prom = PROMEDIO (vector, num);
    printf("el promedio es %.2f \n", prom);

    return 0;
}

void INGRESO (int vec[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Valor %d:\n", i);
        scanf("%d", &vec[i]);
    }
}

float PROMEDIO (int vec[], int n)
{
    int i, acumulador = 0;
    float promedio;
    for (i = 0; i < n; i++)
    {
        acumulador += vec[i];
    }
    promedio = (float) acumulador / n;
    return promedio;
}
