/*Actividad sello 42*/
#include <stdio.h>

//v2 if
int main()
{
    char y;
    printf("Ingrese una letra: ");
    scanf("%c", &y);
    if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u')
    {
        printf("\nEs una vocal");
    }
    else
    {
        printf("\nEs una consonante");
    }

    return 0;
}
