// Realizar una funcion que reciba un vector de enteros y su longitud.
// Debe cargar sus variables con valores aleatorios comprendidos entre 0 y 99

#include <stdio.h>
#include <stdlib.h>
#define num 5
void INGRESO (int [], int);
void IMPRIMIR (int [], int);

int main()
{
    int vector[num];

    INGRESO (vector, num);
    IMPRIMIR (vector, num);

    return 0;
}

void INGRESO (int vec[], int n)
{
    int i; 
    srand(0);
    for (i = 0; i < n; i++)
    {
        vec[i] = rand() % 100; // entre 0 y 99
    }
}
 void IMPRIMIR (int vec[], int n)
 {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", vec[i]);
    }
    printf("\n");
 }
