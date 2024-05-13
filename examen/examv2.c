// v2 con for
#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int art, x, acum = 1;
    int intentos = 3;
    int i;
    printf("Ingrese su nombre: ");
    gets(nombre);
    while (intentos > 0)
    {
        printf("Ingrese su contraseña: ");
        scanf("%s", &contra);
        if (strcmp(contra, conv) == 0)
        {
            printf("\nBienvenido al sistema %s: ", nombre);
            printf("\n¿Cuantos articulos lleva?");
            scanf("%d", &art);
            for (i = 1; i <= art; i++)
            {
                printf("¿Cual es el precio del articulo?");
                scanf("%d", &x);
                if (x > 0)
                {
                    acum += x;
                }
                else{
                    printf("Ingrese de nuevo el precio");
                }
            }
            break;
            else{
                intentos--;
                printf("Le quedan %d intentos",intentos);
                if(intetnos == 0){
                    printf("Acceso denegado");
                }
            }

        }
        if(acum > 1){
            printf("\nSu facttura es de: $%d",x);
        }
    }
        return 0;
}