// Mostrar en pantalla solo las cuentas del tipo A

#include <stdio.h>
#define N 10

void MOSTRAR (int[], char[], float[], int);
//int BUSCA_A (char[], int);
void IMPRIME (int[], char[], float[], int);

int main()
{
	int CUENTA[N] = {458, 321, 744, 228, 359, 201, 198, 705, 789, 227};
	char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
	float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};
	
	MOSTRAR (CUENTA, TIPO, SALDO, N);
	IMPRIME (CUENTA, TIPO, SALDO, N);
	
	return 0;
}

void MOSTRAR (int CUENTA[], char TIPO[], float SALDO[], int L)
{
	int i;
	printf("\nCUENTA \t TIPO \t SALDO\n");
	for (i = 0; i < L; i++)
		printf("\n %d  \t %c  \t %.2f", CUENTA[i], TIPO[i], SALDO[i]);
}

void IMPRIME (int CUENTA[], char TIPO[], float SALDO[], int L)
{
	int i;
	printf("\n\nCUENTA \t TIPO \t SALDO");
	for (i = 0; i < L; i++)
		if ( TIPO[i] == 'A')
			printf("\n%d \t %c \t %.2f", CUENTA[i], TIPO[i], SALDO[i]);
}



