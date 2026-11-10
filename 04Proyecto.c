/*Leer el nombre y el apellido de una persona, su año de nacimiento y el año actual.
Mostrar el nombre en formato “Apellido, Nombre” y su edad.
*/
#include <stdio.h>
int main (){
//Pedir datos
char nombre[20];
char apellido[20];
int Nacimiento;
int Actual;

printf("Ingresa el nombre: ");
scanf("%s", nombre);
printf("Ingresa el apellido: ");
scanf("%s", apellido);
printf("Ingresa el año de nacimiento: ");
scanf("%d", &Nacimiento);
printf("Ingresa el año actual: ");
scanf("%d", &Actual);

//Operaciones
int edad;
edad = Actual - Nacimiento;

//Mostar datos
printf ("\nEl nombre es: %s, %s", apellido, nombre);
printf ("\nLa edad es: %d", edad);
}
