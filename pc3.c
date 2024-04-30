/*ejercicio 26/04/2024 sello 41*/
#include<stdio.h>
int main(){
    int x1,x2,x3, i, j, tem;
    printf ("Ingrese 3 numeros: "); scanf("%i%i%i",&x1,&x2,&x3);
    int arr[] = {x1,x2,x3};
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            if(arr[j]<arr[j+1]){
                tem = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = tem;
            }
        }
        
    }
    printf("Los numeros ordenados de mayor a menor son:\n");
    for (i= 0; i < 3; i++){
        printf("%i\t",arr[i]);
    }

    return 0;
}