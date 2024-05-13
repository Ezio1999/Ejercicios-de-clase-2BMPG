//version modificada del original con cambios de examen
#include<stdio.h>
#include<string>
int main(){
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27"; 
    printf("Ingrese su nombre: \n");
    gets(nombre);
    printf("Ingrese su contraseña: \n");
    scanf("%s",&contra)
    if(strcmp(contra,conv)==0){
        printf("Bienvenido al sistema %s :(\n");
    }
    else {
                intentos--;
                printf("Le quedan %d intentos", intentos);

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


    return 0;
}