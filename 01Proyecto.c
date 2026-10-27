/*Leer tres numeros enteros y mostrar
au suma,
au producto y au
promedio con dos
decimales.
*/
#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa el primer numero:");
float numeroUno;
scanf("%f",&numeroUno);
printf("Ingresa el segundo numero:");
float numeroDos;
scanf("%f",&numeroDos);
printf("Ingresa el tercer numero:");
float numeroTres;
scanf("%f",&numeroTres);

//Operaciones
float suma;
float producto;
float promedio;

suma = numeroUno + numeroDos + numeroTres;
producto = numeroUno * numeroDos * numeroTres;
promedio = (numeroUno+numeroDos+numeroTres)/3;

//Mostrar datos
printf("\nLa suma de los numeros es:%.2f",suma);
printf("\nEl producto de los numeros es:%.2f",producto);
printf("\nEl promedio de los numeros es:%.2f",promedio);
}
