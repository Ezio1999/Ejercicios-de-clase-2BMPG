/*Programa 26/04/2024 sello 40*/
#include <stdio.h>
int main(){
    int x, min, i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %d:", i+1); scanf("%d",&x);
        if(x < min){
            min = x;
        }
    }
    printf("El numero menor es: %d", min);
    return 0;
}