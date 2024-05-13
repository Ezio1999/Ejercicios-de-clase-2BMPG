// v3 con funciones
#include <stdio.h>
#include <string.h>

int acum = 0;

// Funcion de contraseña
int contraSistem(char nombre[], char contra[], char conv[], int *intentos) {
    printf("\nIngrese su contraseña: ");
    scanf("%s", contra);
    if (strcmp(contra, conv) == 0) {
        printf("\nBienvenido al sistema %s :)", nombre);
        return 1;
    } else {
        (*intentos)--;
        printf("Contraseña incorrecta. Le quedan %d intentos", *intentos);

        if (*intentos == 0) {
            printf("Acceso denegado ");
            return 0; 
        }

        return 2; 
    }
}

// Funcion para calcular precio
int calculadora(int art, int acum) {
    int x;
    for (int i = 1; i <= art; i++) {
        printf("¿Cual es el precio del articulo %i?", i);
        scanf("%d", &x);

        if (x > 0) {
            acum += x; 
        } else {
            printf("Ingrese de nuevo el precio \n");
            i--; 
        }
    }

    return acum; // Return the total price
}

//funcion principal
int main() {
    char nombre[50];
    char contra[50];
    char conv[20] = "2b27"; 
    int art;
    int intentos = 3;
    int result;

    printf("Ingrese su nombre: ");
    gets(nombre);

    while (intentos > 0) {
        result = contraSistem(nombre, contra, conv, &intentos);

        if (result == 1) { 
            printf("\n¿Cuantos articulos llevas?");
            scanf("%d", &art);

            if (art > 0) {
                acum = calculadora(art, acum); 
                break; 
            } else {
                printf("Le quedan %d intentos", intentos);

                if (intentos == 0) {
                    printf("\nAcceso denegado ");
                }
            }
        }
    }

    if (acum >= 1) { 
        printf("\nSu factura es de: $%d", acum);
    }

    return 0;
}