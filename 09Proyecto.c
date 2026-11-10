/* Leer cuatro calificaciones parciales y calcular la calificación final
   ponderada (20%, 20%, 25% y 35%).
*/
#include <stdio.h>

int main (){
//Pedir datos
float c1;
float c2;
float c3;
float c4;

printf("Ingresa la primera calificación (20%): ");
scanf("%f", &c1);
printf("Ingresa la segunda calificación (20%): ");
scanf("%f", &c2);
printf("Ingresa la tercera calificación (25%): ");
scanf("%f", &c3);
printf("Ingresa la cuarta calificación (35%): ");
scanf("%f", &c4);

//Operaciones
float calificacion_final;

// Se multiplica cada nota por su respectivo porcentaje en decimal y se suman
calificacion_final = (c1 * 0.20) + (c2 * 0.20) + (c3 * 0.25) + (c4 * 0.35);

//Mostrar datos
printf("\nLa calificación final ponderada es: %.2f\n", calificacion_final);
}
