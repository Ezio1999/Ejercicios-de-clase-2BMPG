/*Pedir 10 numeros enteros y señalar cual es el mayor, menor, y su suma*/
#include <stdio.h>
int main()
{
    int x, i, ma, me = 1, z = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese un numero %d: ", i);
        scanf("%d", &x);
        if (x > ma)
        {
            ma = x;
        }
        else if (x < me)
        {
            me = x;
        }
        z += x;
    }
    printf("\n");
    printf("La suma de los numeros es de: %d\n", z);
    printf("El mayor es: %d\n", ma);
    printf("El menor es: %d\n", me);

    return 0;
}