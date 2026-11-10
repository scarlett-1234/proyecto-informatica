/* Calcular el costo de un terreno cuyo precio es de $900 por m²,
   con descuento del 10% si el área pasa de 500 m² y del 15% si pasa de 1000 m².
*/
#include <stdio.h>

int main (){
//Pedir datos
float largo;
float ancho;

printf("Ingresa el largo del terreno (en metros): ");
scanf("%f", &largo);
printf("Ingresa el ancho del terreno (en metros): ");
scanf("%f", &ancho);

//Operaciones
float area;
float precio_base;
float porcentaje_descuento = 0.0;
float descuento;
float costo_final;

area = largo * ancho;
precio_base = area * 900; // $900 por metro cuadrado

// Determinar el descuento basado en el área
if (area > 1000) {
    porcentaje_descuento = 0.15; // 15% de descuento
}
else if (area > 500) {
    porcentaje_descuento = 0.10; // 10% de descuento
}
else {
    porcentaje_descuento = 0.0;  // Sin descuento
}

descuento = precio_base * porcentaje_descuento;
costo_final = precio_base - descuento;

//Mostrar datos
printf("\nEl área total es: %.2f m2", area);
printf("\nEl precio base es: $%.2f", precio_base);
printf("\nEl descuento aplicado (%.0f%%) es: $%.2f", porcentaje_descuento * 100, descuento);
printf("\nEl costo final es: $%.2f\n", costo_final);
}
