/*Dado el costo de una compra y el dinero entregado por el cliente, calcular el
cambio y desglosarlo en billetes y monedas.(500, 200, 100, 50, 20, 10, 5, 2 y 1).
*/
#include <stdio.h>
int main (){
//Pedir datos
int costo;
int entregado;

printf("Ingresa el costo de la compra: ");
scanf("%d", &costo);
printf("Ingresa el dinero entregado por el cliente: ");
scanf("%d", &entregado);

//Operaciones
int cambio;
cambio = entregado - costo;

printf("\nEl cambio total es: %d\n", cambio);
printf("Desglose del cambio:\n");

// Variables para calcular cada denominacion
int restante = cambio;
int cantidad;

// Billetes de 500
cantidad = restante / 500;
restante = restante % 500;
printf("Billetes de 500: %d\n", cantidad);

// Billetes de 200
cantidad = restante / 200;
restante = restante % 200;
printf("Billetes de 200: %d\n", cantidad);

// Billetes de 100
cantidad = restante / 100;
restante = restante % 100;
printf("Billetes de 100: %d\n", cantidad);

// Billetes de 50
cantidad = restante / 50;
restante = restante % 50;
printf("Billetes de 50: %d\n", cantidad);

// Billetes de 20
cantidad = restante / 20;
restante = restante % 20;
printf("Billetes de 20: %d\n", cantidad);

// Monedas de 10
cantidad = restante / 10;
restante = restante % 10;
printf("Monedas de 10: %d\n", cantidad);

// Monedas de 5
cantidad = restante / 5;
restante = restante % 5;
printf("Monedas de 5: %d\n", cantidad);
    // Monedas de 2
cantidad = restante / 2;
restante = restante % 2;
printf("Monedas de 2: %d\n", cantidad);

// Monedas de 1
cantidad = restante / 1;
printf("Monedas de 1: %d\n", cantidad);
}
