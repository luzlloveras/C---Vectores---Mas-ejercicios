// Crear funcion que muestre 10 cuentas bancarias con su tipo de cuenta y saldo.
// Crear funcion que busque la posicion de una cuenta ingresada por teclado
// Crear funcion que acceda a la informacion de la cuenta ingresada por teclado

#include <stdio.h>
#define N 10

void MOSTRAR (int[], char[], float[], int);
void ACCESO (int[], char[], float[], int, int);
int BUSCAR (int[], int, int);

int main()
{
	int CUENTA[N] = {458, 321, 744, 228, 359, 201, 198, 705, 789, 227};
	char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
	float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};
	
	int C;
	
	MOSTRAR (CUENTA, TIPO, SALDO, N);
	printf("\n\nNumero de cuenta a consultar:");
	scanf("%d", &C);
	ACCESO (CUENTA, TIPO, SALDO, N, C);
	
	return 0;
}

void MOSTRAR (int CUENTA[], char TIPO[], float SALDO[], int L)
{
	int i;
	printf("\nCUENTA \t TIPO \t SALDO\n");
	for (i = 0; i < L; i++)
		printf("\n %d  \t %c  \t %.2f", CUENTA[i], TIPO[i], SALDO[i]);
}

// Muestra los campos resultantes de la busqueda
void ACCESO (int CUENTA[], char TIPO[], float SALDO[], int L, int C)
{
	int POS;
	POS = BUSCAR (CUENTA, L, C);
	if (POS < 0)
		printf("\n El numero de cuenta es inexistente \n");
	else
		printf("\n %d \t %c \t %.2f \n", CUENTA[POS], TIPO[POS], SALDO[POS]);
}

// Retorna la posicion de la cuenta buscada o -1
int BUSCAR (int CUENTA[], int L, int NUM)
{
	int i;
	for (i = 0; i < L; i++)
		if (CUENTA[i] == NUM)
			return i;
	return -1;
}



