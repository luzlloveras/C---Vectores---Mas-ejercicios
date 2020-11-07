// Ingresar, en un orden cualquiera, datos de 16 equipos de futbol.
// Datos a ingresar: codigo del equipo (int) y cantidad de puntos (int).
// Mostrar la tabla de posiciones (ordenadas).
// Mostrar los partidos entre el primer equipo y el ultimo, y el segundo equipo y el anteultimo.

#include <stdio.h>
#define N 16

void CARGAR (int [], int[], int);
void TABLA (int [], int[], int);
void ORDENAR (int [], int[], int);
void FIXTURE (int [], int[], int);

int main()
{
	int codigo[N], puntos[N];
	CARGAR (codigo, puntos, N);
	TABLA (codigo, puntos, N);
	ORDENAR (codigo, puntos, N);
	TABLA (codigo, puntos, N);
	FIXTURE (codigo, puntos, N);
	return 0;
}

void CARGAR (int cod[], int punt[], int num)
{
	int i;
	for (i=0; i<num; i++)
	{
		printf("\nIngrese codigo:");
		scanf("%d", &cod[i]);
		printf("\nIngrese puntos:");
		scanf("%d", &punt[i]);
	}
}

void TABLA (int cod[], int punt[], int num)
{
	int i;
	printf("\n\n EQUIPO \t PUNTOS");
	for (i=0; i<num; i++)
		printf("\n %d \t\t %d", cod[i], punt[i]);
}

void ORDENAR (int cod[], int punt[], int num)
{
	int i, j, aux_cod, aux_punt;
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
			}
}

void FIXTURE (int cod[], int punt[], int num)
{
	int i, j;
	printf("\n\n");
	for (i = 0; i < num/2; i++)
		printf("\n EQUIPO %d JUEGA CON EQUIPO %d", cod[i], cod[num-i-1]);
}



