/* Leer cinco calificaciones. Mostrar el promedio, la calificación más alta
   y la más baja, e indicar si el alumno está aprobado o reprobado (mínimo 6).
*/
#include <stdio.h>

int main (){
//Pedir datos
float c1, c2, c3, c4, c5;

printf("Ingresa la primera calificación: ");
scanf("%f", &c1);
printf("Ingresa la segunda calificación: ");
scanf("%f", &c2);
printf("Ingresa la tercera calificación: ");
scanf("%f", &c3);
printf("Ingresa la cuarta calificación: ");
scanf("%f", &c4);
printf("Ingresa la quinta calificación: ");
scanf("%f", &c5);

//Operaciones
float promedio;
float maxima;
float minima;

// Calcular promedio
promedio = (c1 + c2 + c3 + c4 + c5) / 5;

// Encontrar la calificación más alta
maxima = c1;
if (c2 > maxima) maxima = c2;
if (c3 > maxima) maxima = c3;
if (c4 > maxima) maxima = c4;
if (c5 > maxima) maxima = c5;

// Encontrar la calificación más baja
minima = c1;
if (c2 < minima) minima = c2;
if (c3 < minima) minima = c3;
if (c4 < minima) minima = c4;
if (c5 < minima) minima = c5;

//Mostrar datos
printf("\nEl promedio es: %.2f", promedio);
printf("\nLa calificación más alta es: %.2f", maxima);
printf("\nLa calificación más baja es: %.2f", minima);

// Determinar categoria
if (promedio >= 6.0) {
    printf("\nCategoria: APROBADO\n");
} else {
    printf("\nCategoria: REPROBADO\n");
}
}
