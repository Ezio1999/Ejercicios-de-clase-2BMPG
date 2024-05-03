/*Escriba un programa en C que genere ña soguiente que la siguiente serie: 5,10,15,20,25,30... El programa preguntara primero 
cuantos terminos se quieren mostrar despues mostrara la serie correspondinete*/

#include<stdio.h>
int main(){
    int x,i;
    printf("Cuantos terminos desea mostrar: "); scanf("%i",&x);
    for(i=1;i<=x;i++){
        printf("%d\n",i*5);
    }
    return 0;
}