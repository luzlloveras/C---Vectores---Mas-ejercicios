// Realizar tabla de torneo de buceo

#include <stdio.h>
#define N 15

void CARGAR (int[], int[], int);
void TABLA (int[], int[], int);
void ORDENAR (int[], int[], int);

int main()
{
	int i, ingreso, buceador[N], puntos[N];
	
	CARGAR (buceador, puntos, N);
	TABLA (buceador, puntos, N);

	printf("Ingrese numero de buceador que hizo una captura");
	scanf("%d", &ingreso);
	while (ingreso > 0)
	{
		for (i=0; i < N; i++)
			if (buceador[i] == ingreso)
				puntos[i]++;
		
		ORDENAR (buceador, puntos, N);
		system("cls");
		TABLA (buceador, puntos, N);
		printf("Ingrese numero de buceador que hizo una captura");
		scanf("%d", &ingreso);
	}

	return 0;
}

void CARGAR (int buc[], int punt[], int num)
{
	int i;
	for (i=0; i<N; i++)
	{
		buc[i] = i+1;
		punt[i]=0;
	}
}

void TABLA (int buc[], int punt[], int num)
{
	int i;
	printf("\n BUCEADOR \t PUNTOS\n");
	for (i=0; i<N; i++)
		printf("\t%d \t \t%d\n", buc[i], punt[i]);
}

void ORDENAR (int buc[], int punt[], int num)
{
	int i, j, aux_buc, aux_punt;
	for (i=0; i < num-1; i++)
		for (j=0; j < num-i-1; j++)
			if (punt[j] < punt[j+1])
			{
				//swapping
				aux_punt = punt[j];
				punt[j] = punt[j+1];
				punt[j+1] = aux_punt;
				
				//arrastre
				aux_buc = buc[j];
				buc[j] = buc[j+1];
				buc[j+1] = aux_buc;
			}
}






