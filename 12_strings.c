#include <stdio.h>
#include <string.h>
#define N 6
#define C 30

void CARGAR (int [], int[], char[][C], int);
void TABLA (int [], int[], char[][C], int);
void ORDENAR (int [], int[], char[][C], int);
void FIXTURE (int [], int[], char[][C], int);

int main()
{
	int codigo[N], puntos[N];
	char nombre[N][C];
	
	CARGAR (codigo, puntos, nombre, N);
	TABLA (codigo, puntos, nombre, N);
	ORDENAR (codigo, puntos, nombre, N);
	TABLA (codigo, puntos, nombre, N);
	FIXTURE (codigo, puntos, nombre, N);
	return 0;
}

void CARGAR (int cod[], int punt[], char nomb[][C], int num)
{
	int i;
	for (i=0; i<num; i++)
	{
		printf("\nIngrese codigo:");
		scanf("%d", &cod[i]);
		printf("\nIngrese puntaje:");
		scanf("%d", &punt[i]);
		printf("\nIngrese nombre:");
		fflush(stdin); //limpia el buffer de teclado de entrada
		gets(nomb[i]);
	}
}

void TABLA (int cod[], int punt[], char nomb[][C], int num)
{
	int i;
	printf("\n\n EQUIPO \t PUNTAJE \t CODIGO %s");
	for (i=0; i<num; i++)
		printf("\n %s \t\t%d \t\t%d", nomb[i], punt[i], cod[i]);
}

void ORDENAR (int cod[], int punt[], char nomb[][C], int num)
{
	int i, j, aux_cod, aux_punt;
	char aux_nomb[C];
	
	for (i=0; i<num-1; i++)
		for (j=0; j<num-i-1; j++)
			if (punt[j] < punt[j+1])
			{
				//swapping
				aux_punt = punt[j];
				punt[j] = punt[j+1];
				punt[j+1] = aux_punt;			
				//arrastre
				aux_cod = cod[j];
				cod[j] = cod[j+1];
				cod[j+1] = aux_cod;
				
				//arrastre
				strcpy(aux_nomb, nomb[j]);
				strcpy(nomb[j], nomb[j+1]);
				strcpy(nomb[j+1], aux_nomb);
			}
}

void FIXTURE (int cod[], int punt[], char nomb[][C], int num)
{
	int i, j;
	printf("\n\n");
	for (i = 0; i < num/2; i++)
		printf("\n EQUIPO %s JUEGA CON EQUIPO %s", nomb[i], nomb[num-i-1]);
}



