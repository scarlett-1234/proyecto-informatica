/* Leer un número entero y decir si es positivo, negativo o cero,
   y además si es par o impar.
*/
#include <stdio.h>

int main (){
//Pedir datos
int numero;

printf("Ingresa un número entero: ");
scanf("%d", &numero);

//Operaciones y Mostrar datos

// Primera condición: Positivo, Negativo o Cero
if (numero > 0) {
    printf("\nEl número es: Positivo");
}
else if (numero < 0) {
    printf("\nEl número es: Negativo");
}
else {
    printf("\nEl número es: Cero");
}

// Segunda condición: Par o Impar
// Usamos el operador residuo (%) para saber si el resto de dividir entre 2 es cero
if (numero % 2 = 0) {
    printf("\nEl número es: Par\n");
}
else {
    printf("\nEl número es: Impar\n");
}
}
