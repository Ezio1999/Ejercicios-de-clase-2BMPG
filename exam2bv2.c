#include<stdio.h>
int main(){
    int mayor=0, menor=1, z=0, i=0;
    int x;
    while (i<10)
    {
        printf("Ingrese el numero %d: ",i+1);scanf("%d",&x);
        i++;
        if(x>mayor){
            mayor = x;
        }
        else if(x<menor){
            menor = x;
        }
        z+=x;
    }
    printf("La suma de los numeros es de: %d\n", z);
    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d\n", menor);

    return 0;
}