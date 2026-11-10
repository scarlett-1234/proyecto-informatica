/* Leer el radio y la altura de un cilindro.
   Calcular y mostrar su área total, su volumen
   y su capacidad en litros (las medidas están en cm).
*/
#include <stdio.h>

int main (){
//Pedir datos
float radio;
float altura;

printf("Ingresa el radio del cilindro (en cm): ");
scanf("%f", &radio);
printf("Ingresa la altura del cilindro (en cm): ");
scanf("%f", &altura);

//Operaciones
float pi = 3.141592;
float area_total;
float volumen;
float litros;

// Fórmulas geométricas
area_total = 2 * pi * radio * (radio + altura);
volumen = pi * (radio * radio) * altura;

// Conversión: 1 litro equivale a 1000 cm³
litros = volumen / 1000;

//Mostrar datos
printf("\nEl área total es: %.2f cm2", area_total);
printf("\nEl volumen es: %.2f cm3", volumen);
printf("\nLa capacidad en litros es: %.4f L\n", litros);
}
