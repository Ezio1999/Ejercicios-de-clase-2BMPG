#include<stdio.h>
int main(){
    int c,cont=0;
    do
    {
        printf("Ingrese la contraseña: ");scanf("%d",&c);
        if (c == 1234 )
        {
            printf("Bienvenido al sistema :)");
        }
        cont = cont+1;
    } while (cont <= 3);
    printf("Numero de intentos agotado");

    return 0;
}