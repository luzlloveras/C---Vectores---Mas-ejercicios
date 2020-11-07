// Generar y mostrar matriz de 8x8 cuyos elementos valgan 0, exceptual 2 que valdran 1.
// Estaran ubicados en posiciones aleatorias de la matriz.

#include <stdio.h>
#include <stdlib.h>
#define FILA 8
#define COLUMNA 8

void CARGAR (int[][COLUMNA], int, int);
void MOSTRAR (int[][COLUMNA], int, int);
int COMPARTIR (int[][COLUMNA], int, int);

int main ()
{
	int matriz[FILA][COLUMNA], copia[FILA][COLUMNA];
	srand(12);
	CARGAR (matriz, FILA, COLUMNA);
	MOSTRAR (matriz, FILA, COLUMNA);
	COMPARTIR (matriz, FILA, COLUMNA);
	if (COMPARTIR (matriz, FILA, COLUMNA) == 1)
		printf("\n\nComparten una de estas opciones: fila / columna / diagonal");
	else
		printf("\n\nNo comparten ninguna de estas opciones: fila / columna / diagonal");
	printf("\n\n");
	
	return 0;
}

void CARGAR (int mat[][COLUMNA], int F, int C)
{
	int i, j, cont=0;
	for (i=0; i < F; i++)
		for (j=0; j < C; j++)
		{
			if (cont < 2 )
			{
				mat[i][j] = rand() % 2;
					if (mat[i][j] == 1)
						cont++;
			}
			else
				mat[i][j] = rand() % 1;
		}
}

void MOSTRAR (int mat[][COLUMNA], int F, int C)
{
	int i, j;
	printf("\nImpresion de la matriz\n");
	for (i=0; i < F; i++)
	{
		printf("\n\n");
		for (j=0; j < C; j++)
			printf("%4d", mat[i][j]);
	}
}

int COMPARTIR (int mat[][COLUMNA], int F, int C)
{
	int i, j, aux_i, aux_j, aux_I, aux_J, flag=0;
	for (i = 0; i < F; i++)
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] == 1 && flag==0)
			{
				aux_i = i;
				aux_j = j;
				flag = 1;
			}
			else
				if (mat[i][j]==1 && flag==1)
				{
					aux_I = i;
					aux_J = j;
				}
		}
	// Compara por fila(i) o por columna(j) 
	if (aux_i == aux_I || aux_j == aux_J)
		return 1;

	// Compara por diagonal
	if (aux_i == aux_I-1 && aux_j == aux_J-1)
		return 1;
	if (aux_i == aux_I-1 && aux_j == aux_J+1)
		return 1;
	if (aux_i == aux_I+1 && aux_j == aux_J+1)
		return 1;
	if (aux_i == aux_I+1 && aux_j == aux_J-1)
		return 1;

	return 0;
}








