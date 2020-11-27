// Mostrar en pantalla las cuenta con saldo mayor a $500 de forma decreciente

#include <stdio.h>
#define N 10

void MOSTRAR (int[], char[], float[], int);
void ORDENAR (int[], char[], float[], int);
void IMPRIME (int[], char[], float[], int);

int main()
{
	int CUENTA[N] = {458, 321, 744, 228, 359, 201, 198, 705, 789, 227};
	char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
	float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};
	
	MOSTRAR (CUENTA, TIPO, SALDO, N);
	ORDENAR (CUENTA, TIPO, SALDO, N);
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

void ORDENAR (int CUENTA[], char TIPO[], float SALDO[], int L)
{
    int i, j, aux_cuenta;
    char aux_tipo;
    float aux_saldo;

    for (i = 0; i < L-1; i++)
        for (j = 0; j < L-i-1; j++)
            if ((SALDO[j] < SALDO[j+1]) && SALDO > 500)
            {
                // Ordena los SALDOS de mayor a menor
                aux_saldo = SALDO[j];
                SALDO[j] = SALDO[j+1];
                SALDO[j+1] = aux_saldo;
                
                // Ordena los datos segun el saldo
                aux_tipo = TIPO[j];
                TIPO[j] = TIPO[j+1];
                TIPO[j+1] = aux_tipo;
                
                // Ordena los legajos segun el saldo
                aux_cuenta = CUENTA[j];
                CUENTA[j] = CUENTA[j+1];
                CUENTA[j+1] = aux_cuenta;
            }
}

