#include<stdio.h>
int main(){
    int x=1,cont,acum;
    do
    {
        printf("Ingrese un numero: "); scanf("%d",&x);
        printf("Has introducido el numero: %d\n",x);
        if (x>0)
        {
            cont++;
            acum = acum +x; 
        }
    
    } while (x>0);
        printf("Introduciste %d numeros.\n",cont);
        printf("La suma de tus numeros es: %d\n",acum);
        printf("Ejecucion finalizada ");
    
    return 0;
}
