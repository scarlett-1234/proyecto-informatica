/*Leer temperatura en grados Celsius y mostrar
au Fahrenheit,
au Kelvin.
*/
#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa grados Celsius:");
float gradosCelsius;
scanf("%f",&gradosCelsius);

//Operaciones
float Fahrenheit;
float Kelvin;


Fahrenheit = (gradosCelsius * 9/5) + 32;
Kelvin = gradosCelsius + 273.15;


//Mostrar datos
printf("\nLa tempreratura en Fahrenheit es:%.2f",Fahrenheit);
printf("\nLa tempreratura en Kelvin es:%.2f",Kelvin);
}
