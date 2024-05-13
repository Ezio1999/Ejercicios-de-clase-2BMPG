//version modificada del original con cambios de examen
#include<stdio.h>
#include<string.h>
int main(){
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27";
    int intentos = 3;
    printf("Ingrese su nombre: \n");
    gets(nombre);
    while (intentos>0)
    {
    printf("Ingrese su contraseña: \n");
    scanf("%s",&contra);
    if(strcmp(contra,conv)==0){
        printf("Bienvenido al sistema %s :)\n",nombre);
    break;
    }
    else {
                intentos--;
                printf("Le quedan %d intentos", intentos);

                if (intentos == 0) {
                    printf("\nAcceso denegado ");
                }
            }
        } 

    return 0;
    }
    

