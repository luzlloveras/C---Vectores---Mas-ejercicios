// Ingresaar 20 valores enteros.
// Ingrese un valor adicional nombrado DIV
// Indique cuantos componentes del vector son divisibles por DIV.

#include <stdio.h>
#include <stdio.h>

int main()
{
    int vec[20], i, DIV, contador = 0;

    printf("Ingrese 20 valores enteros:\n");
    for (i=0; i < 20; i++)
        scanf("%d", &vec[i]);
    printf("Ingrese 1 valor adicional:\n");
    scanf("%d", &DIV);

    for (i = 0; i < 20; i++)
        if (vec[i] % DIV == 0)
            contador++;
    printf("%d componentes son divisibles por %d \n", contador, DIV);

    return 0;
}

