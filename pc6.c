#include<stdio.h>
int main(){
    int x;
    printf("Ingrese un numero: ");scanf("%i",&x);
    switch (x){
    {
    case 1:
        printf("As");
        break;
    case 10:
        printf("Sota");
        break;
    case 11:
        printf("Caballo");
        break;
    case 12:
        printf("Rey");
        break;
    default:
    if(x>=2 && x<=9){
        printf("No es ninguna figura, ni tampoco As.");
    }
    else{
    printf("No es ningun numero de la baraja española. ");
    }
        break;
    }

    return 0;
    }
}