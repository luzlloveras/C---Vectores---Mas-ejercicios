// Realizar una funcion que reciba dos vector de mismo tamaño y longitud.
// Retorna 1 si ambos vectores son identicos en contenido y posicion.
// Retorna 0 en caso contrario.

#include <stdio.h>
#include <stdlib.h>
#define N 10
void CARGA (int [], int [], int);
void MIRAR (int [], int [], int);
int IDENTICOS (int [], int [], int);

int main()
{
    int vector_1[N], vector_2[N], resultado;
    CARGA (vector_1, vector_2, N);
    MIRAR (vector_1, vector_2, N);
    resultado = IDENTICOS (vector_1, vector_2, N);
    if (resultado == 1) 
        printf("Ambos vectores son identicos\n");
    else
        printf("Los vectores NO son identicos\n");
    
    return 0;
}

void CARGA (int vec_1[], int vec_2[], int num)
{
    int i;
    srand(0);
    for (i = 0; i < num; i++)
    {
        vec_1[i] = rand() % 50;
        vec_2[i] = rand() % 50;
    }
}

void MIRAR (int vec_1[], int vec_2[], int num)
{
    int i;
    printf("VECTOR 1\t");
    for (i = 0; i < N; i++)
        printf("%4d", vec_1[i]);
    printf("\n");
    printf("VECTOR 2\t");
    for (i = 0; i < N; i++)
        printf("%4d", vec_2[i]);
    printf("\n");
}


int IDENTICOS (int vec_1[], int vec_2[], int num) 
{
    int i, flag = 0;
    for (i = 0; i < N; i++)
        if (vec_1[i] != vec_2[i])
            flag = 1;
    if (flag == 0)
        return 1;
    else
        return 0;
}
