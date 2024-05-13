// v3 con funciones
#include <stdio.h>
#include <string.h>
int sistemacontraseña(char monbre[], char contra[], char conv[], int intentos)
{
    printf("Ingrese la contraseña:");
    scanf("%d", &contra);
    if (strcmp(contra, conv) == 0)
    {
        printf("\nBienvenido al sistema :)");
    }
    return 1;
    if(intentos == 0){
        printf("Acceso denegado");
        return 0;
    }
    return 2;
}

int calcularprecio(art,acum){
    for(int i=1;i<=art;i++){
            printf("¿Cual es el precio del articulo?");
            scanf("%d",&x);
            if(x>0){
                acum += x;
            }
            else{
                printf("Ingrese de nuevo el precio \n");
                i--;
            }
    }
    return acum;
}

int main()
{
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int art, x, acum = 1;
    int intentos = 3;
    printf("Ingrese su nombre: ");
    gets(nombre);
    while (intentos > 0)
    {
        int result == sistemacontraseña(nombre,contra,conv,intentos);
        if (resul == 1){
            printf("¿Cuantos articulos llevas?");
            scanf("%d",&art);
            if(art > 0){
                acum = calcularprecio(art,acum);
                break;
            }else{
                printf("le quedan %d",intentos);
                if(intentos == 0){
                    printf("Acceso denegado");
                }
            }
        }
    }
        if (acum >= 2){
            printf("\n Su factura es de: $%d",acum);
        }
    

    return 0;
}