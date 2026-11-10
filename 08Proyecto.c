/* Calcular el costo total de un terreno rectangular a partir de su largo,
   su ancho y el precio por m². Mostrar el subtotal, el IVA (16%) y el total.
*/
#include <stdio.h>

int main (){
//Pedir datos
float largo;
float ancho;
float precioMetro;

printf("Ingresa el largo del terreno (en metros): ");
scanf("%f", &largo);
printf("Ingresa el ancho del terreno (en metros): ");
scanf("%f", &ancho);
printf("Ingresa el precio por metro cuadrado: ");
scanf("%f", &precioMetro);

//Operaciones
float area;
float subtotal;
float iva;
float total;

area = largo * ancho;
subtotal = area * precioMetro;
iva = subtotal * 0.16; // 16% de IVA
total = subtotal + iva;

//Mostrar datos
printf("\nEl subtotal es: $%.2f", subtotal);
printf("\nEl IVA (16%%) es: $%.2f", iva);
printf("\nEl costo total es: $%.2f\n", total);
}
