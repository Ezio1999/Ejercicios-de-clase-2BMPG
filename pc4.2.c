#include <stdio.h>
int main()
{
    char x;
    printf("Introduzca una letra una letra: ");
    scanf("%c", &x);
    switch (x)
    {
    case 'a':
        printf("\nEs una vocal");
        break;
    case 'e':
        printf("\nEs una vocal");
        break;
    case 'i':
        printf("\nEs una vocal");
        break;
    case 'o':
        printf("\nEs una vocal");
        break;
    case 'u':
        printf("\nEs una vocal");
        break;
    default:
        printf("\nEs una consonane");
        break;
    }

    return 0;
}
// version 2 del pc4
