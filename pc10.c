#include<stdio.h>
int main(){
    int x=1,cont,acum;
    while (x>0)
    {
        printf("Ingrese un numero: "); scanf("%d",&x);
        printf("Has introducido el numero: %d\n",x);
        cont = cont+1;
        acum = acum+x;
        
    }
    printf("Introduciste %d numeros.\n",cont);
    printf("La suma de tus numeros es: %d",acum);
    printf("Ejecucion finalizada ");
    
    return 0;
}
