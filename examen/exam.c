// del programa
/*#include <stdio.h>
int main(){
    int x,y,z;
    printf("Ingrese 3 numeros: "); scanf("%i%i%i",&x,&y,&z);
    if (x == 1 && y == 2 && z == 3)
    {
        printf("Acceso permitido :)");
    }
    else{
        printf("Acceso denegado :(");
    }

    return 0;
}*/
   // int z = 0;

// v2: pida nombre, contraseña y de 3 oportunidades
#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int art, x, acum = 1;
    int intentos = 3;
    printf("Ingrese su nombre: ");
    gets(nombre);
    while (intentos>0)
    {
        
    printf("\nIngrese su contraseña: ");
    scanf("%s", &contra);
    //sistema de acceso 
    if (strcmp (contra,conv) == 0)
    {
        printf("\nBienvenido al sistema %s:)", nombre);
        printf("\n¿Cuantos articulos llevas?");
        scanf("%d", &art);
        //sistema de articulos 
        if (art > 1)
        {
            //sistema de precio de articulos 
            int i = 1;
            while (i <= art)
            {
                printf("¿Cual es el precio del articulo %i?",i);
                scanf("%d", &x);
                if(x>0){
                acum += x;
                i++;
                }
                else{printf("Ingrese de nuevo el precio \n");}
            }
            break;
        }else {
                intentos--;
                printf("Cantidad de artículos inválida. Le quedan %d intentos", intentos);

                if (intentos == 0) {
                    printf("Acceso denegado ");
                }
            }
        } else {
            intentos--;
            printf("Contraseña incorrecta. Le quedan %d intentos", intentos);

            if (intentos == 0) {
                printf("Acceso denegado ");
            }
        }
    }

    if (acum > 1) { 
        printf("\nSu factura es de: $%d", x);
    }
    return 0;
}