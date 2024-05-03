#include<stdio.h>
int main(){
    char u[50];
    int c,cont=0;
    printf("Ingrese el usuario: ");scanf("%s",&u);
    do
    {
        printf("Ingrese la contraseña: ");scanf("%d",&c);
        if (c == 1234 )
        {
            printf("Bienvenido al sistema :)");
            cont = 4;
        }
        cont = cont+1;
    } while (cont == 3);
    if (cont==3){ 
        printf("Numero de intentos agotado");
    }

    return 0;
}