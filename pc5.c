/*Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de las horas trabajadas y el precio cobrado por hora.
Ambos deben ser solicitadps al usuario. La jornada normal es de 40 horas semanales.Las horas extra se pagan un 50% mas caras que las normales
y a pagarse a dopble de las normales a partir de las 50 horas trabajadas*/
#include <stdio.h>
int main()
{
    float h, x, hf, s, sueldo, z, a, hf2;
    printf("Cuanto le pagan la hora: ");
    scanf("%f", &x);
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &h);
    if (h > 50)
    {
        hf = h - 40;
        z = 40 * x;
        s = 10 * (x * 1.5);
        hf2 = h - 50;
        a = (hf2 * x) * 2;
        sueldo = z + s + a;
        printf("\nSu sueldo es de: $%.2f", sueldo);
    }
    else if (h > 40)
    {
        hf = h - 40;
        z = 40 * x;
        s = hf * (x * 1.5);
        sueldo = z + s;
        printf("\nSu sueldo es de: %.2f", sueldo);
    }
    else
    {
        sueldo = x * h;
        printf("\nSu sueldo es de: $%.2f", sueldo);
    }

    return 0;
}
// hola mundo
//:)