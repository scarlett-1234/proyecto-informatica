/*Leer longitud en cent�metros y mostrarla
au pies,
au pulgadas.
*/
#include <stdio.h>
main(){
//Pedir datos
printf("Ingresa longitud en centimetros");
float centimetros;
scanf("%f",&centimetros);

//Operaciones
float pies;
float pulgadas;


pies = centimetros/30.48;
pulgadas = centimetros/2.54;


//Mostrar datos
printf("\nLa longitud en pies es:%.1f",pies);
printf("\nLa longitud en pulgadas es:%.1f",pulgadas);
}
