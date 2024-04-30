#include<stdio.h>
#include<math.h>
int main(){
    int x,b,B,h;
    float z; 
    printf("CALCULO DE AREAS\n");
    printf("____________________\n");
    printf("1.Calcular el area de un triangulo.\n");
    printf("2.Calcular el area de un trapecio.\n");
    printf("3.Calcular el area de un rectangulo.\n");
    printf("Que desea saber???");scanf("%i",&x);
    switch (x)
    {
    case 1:
        printf("Ingrese la base primero y despues la haltura: "); scanf("%i%i",&b,&h);
        z = (b*h)/2;
        printf("\nEl area del triangulo es: %.2f",z);
        break;
    case 2:
        printf("Ingrese primero la base mayor, despue la base menor y al final la haltura: ");scanf("%i%i%i",&B,&b,&h);
        z= ((B+b)*h)/2;
        printf("\nEl area del trapecio es de: %.2f",z);
        break;
    case 3:
        printf("Ingrese el largo y despues el ancho del rectangulo: ");scanf("%i%i",&b,&h);
        z = b*h ;
        printf("\nEl area del rectangulo es: %.2f",z);
        break;
    default:
        break;
    }

    return 0;
}
