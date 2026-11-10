/* Leer tres calificaciones, calcular el promedio y clasificar al alumno:
   exento (promedio >= 9), ordinario (6 a 8.99) o extra (< 6).
   Si tiene alguna calificación menor a 6, no puede estar exento aunque su promedio sea alto.
*/
#include <stdio.h>

int main (){
//Pedir datos
float c1;
float c2;
float c3;

printf("Ingresa la primera calificación: ");
scanf("%f", &c1);
printf("Ingresa la segunda calificación: ");
scanf("%f", &c2);
printf("Ingresa la tercera calificación: ");
scanf("%f", &c3);

//Operaciones
float promedio;
promedio = (c1 + c2 + c3) / 3;

//Mostrar datos y clasificación
printf("\nEl promedio es: %.2f", promedio);

//Regla: si alguna es menor a 6, no puede estar excento
if (c1 < 6 || c2 < 6 || c3 < 6) {if (promedio >= 6) {
        printf("\nClasificación: Ordinario (No puede exentar por tener una calificación menor a 6)\n");
    }
else {
        printf("\nClasificación: Extra\n");
    }
}
else {
// Si no hay calificaciones menores a 6, clasificamos normal por promedio
if (promedio >= 9) {
        printf("\nClasificación: Exento\n");
    }
else if (promedio >= 6) {
        printf("\nClasificación: Ordinario\n");
    }
else {
        printf("\nClasificación: Extra\n");
    }
}
}
