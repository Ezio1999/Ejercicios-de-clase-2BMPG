/*elevar un numero a una potencia
v1= elevado a travez de la funcion de elevar potneia 
v2: sin esa funcion de elevar potencia a travez de un ciclo*/
#include<stdio.h>
#include<math.h>
int main(){
    int x, y,z=0;
    printf("Ingrese un numero: ");scanf("%i",&x);
    printf("Ingrese el exponente: ");scanf("%i",&y);
    z = pow(x,y);
    printf("El resultado de la potencia es de: %i",z);

    return 0;
}

