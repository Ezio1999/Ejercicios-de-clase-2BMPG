#include<stdio.h>
int main(){
    int x=1,cont=0,acum;
    do
    {
        printf("Ingrese un numero: "); scanf("%d",&x);
        if (x!=0)
        {
            cont++;
            acum = acum +x; 
            printf("Has introducido el numero: %d\n",x);
        }
    
    } while (x!=0);
        printf("Cantidad de numeros ingresados: %d\n",cont);
        printf("La suma de tus numeros es: %d\n",acum);
        printf("Ejecucion finalizada ");
    return 0;
}
