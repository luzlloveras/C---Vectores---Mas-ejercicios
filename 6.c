// Realizar una funcion que reciba un vector de enteros y su longitud.
// Retorna 1 si el vector esta ordenado en forma creciente.
// Retorna 0 en caso contrario.

#include <stdio.h>
#include <stdlib.h>
#define N 10
void CARGA (int [], int);
void MIRAR (int [], int);
int ORDEN (int [], int);

int main()
{
    int vector [N], resultado;
    CARGA (vector, N);
    MIRAR (vector, N);
    resultado = ORDEN(vector, N);
    if (resultado == 1) 
    {
        printf("Es creciente\n");
    }
    else
    {
        printf("No es creciente\n");
    }
    
    return 0;
}

void CARGA (int vec[], int num)
{
    int i;
    srand(0);
    for (i = 0; i < num; i++)
    {
        vec[i] = rand() % 50;
    }
}

void MIRAR (int vec[], int n)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%4d", vec[i]);
    }
    printf("\n");
}


int ORDEN (int vec[], int num) 
{
    int i, flag = 0;
    for (i = 0; i < N; i++)
    {
        if (vec[i] > vec[i+1])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}