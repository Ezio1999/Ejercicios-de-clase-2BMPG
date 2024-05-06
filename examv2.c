#include<stdio.h>
int main(){
    int x , y , z=1 , i;
    printf("Ingrese un numero: ");scanf("%i",&x);
    printf("Ingrese el exponente: ");scanf("%i",&y);
    for ( i = 0 ; i < y; i++)
    {
        z *= x;
    }
    printf("EL resultado de la potencia es de: %i",z);

    return 0;
}
