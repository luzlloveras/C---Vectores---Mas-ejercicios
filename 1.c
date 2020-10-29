// Ingresaar 20 valores enteros.
// Mostrarlos en pantalla en el orden de ingreso.
// Mostrarlos en la linea siguiente en el orden inverso al ingreso.

#include <stdio.h>
#include <stdio.h>

int main()
{
    int vec[20], i;

    printf("Ingrese 20 valores enteros:\n");
    for (i=0; i < 20; i++)
    {
        scanf("%d", &vec[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("%4d", vec[i]);
    }
    printf("\n");
    for (i = 19; i >= 0 ; i--)
    {
        printf("%4d", vec[i]);
    }
    printf("\n");
    return 0;
}

