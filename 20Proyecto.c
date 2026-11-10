/* Resolver una ecuación de segundo grado con la fórmula general.
   Considerar los tres casos del discriminante (dos raíces reales, una raíz doble
   o raíces complejas, mostrando parte real e imaginaria) y el caso a = 0,
   donde la ecuación pasa a ser de primer grado.
*/
#include <stdio.h>
#include <math.h>

int main (){
//Pedir datos
float a;
float b;
float c;

printf("Ingresa el coeficiente a: ");
scanf("%f", &a);
printf("Ingresa el coeficiente b: ");
scanf("%f", &b);
printf("Ingresa el coeficiente c: ");
scanf("%f", &c);

//Operaciones y Mostrar datos

// Caso especial: a = 0 (Ecuación de primer grado)
if (a == 0) {
    if (b != 0) {
        float x;
        x = -c / b;
        printf("\nComo a = 0, es una ecuación de primer grado.");
        printf("\nLa única raíz real es x = %.2f\n", x);
    } else {
        if (c == 0) {
            printf("\nLa ecuación tiene infinitas soluciones (0 = 0).\n");
        } else {
            printf("\nLa ecuación no tiene solución (Absurdo matemático).\n");
        }
    }
} else {
    // Caso de segundo grado: calcular discriminante
    float discriminante;
    discriminante = (b * b) - (4 * a * c);

    printf("\nEl discriminante es: %.2f", discriminante);

    if (discriminante > 0) {
        // Caso 1: Dos raíces reales distintas
        float x1, x2;
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("\nTiene dos raíces reales y diferentes:");
        printf("\nx1 = %.2f", x1);
        printf("\nx2 = %.2f\n", x2);
    }
    else if (discriminante == 0) {
        // Caso 2: Una raíz real doble
        float x;
        x = -b / (2 * a);
        printf("\nTiene una raíz real doble:");
        printf("\nx1 = x2 = %.2f\n", x);
    }
    else {
        // Caso 3: Raíces complejas / imaginarias
        float parte_real;
        float parte_imaginaria;

        parte_real = -b / (2 * a);
        // fabs() obtiene el valor absoluto para que sqrt() no reciba un negativo
        parte_imaginaria = sqrt(fabs(discriminante)) / (2 * a);

        printf("\nTiene dos raíces complejas conjugadas:");
        printf("\nx1 = %.2f + %.2fi", parte_real, parte_imaginaria);
        printf("\nx2 = %.2f - %.2fi\n", parte_real, parte_imaginaria);
    }
}
}
