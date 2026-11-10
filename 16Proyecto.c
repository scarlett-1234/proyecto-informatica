/* Leer tres números y mostrarlos de menor a mayor.
*/
#include <stdio.h>

int main (){
//Pedir datos
int n1;
int n2;
int n3;

printf("Ingresa el primer número: ");
scanf("%d", &n1);
printf("Ingresa el segundo número: ");
scanf("%d", &n2);
printf("Ingresa el tercer número: ");
scanf("%d", &n3);

//Operaciones
int menor;
int medio;
int mayor;

// Evaluamos todas las combinaciones posibles para ordenarlos
if (n1 <= n2 && n1 <= n3) {
    menor = n1;
if (n2 <= n3) {
        medio = n2;
        mayor = n3;
    }
else {
        medio = n3;
        mayor = n2;
    }
} else if (n2 <= n1 && n2 <= n3) {
    menor = n2;
    if (n1 <= n3) {
        medio = n1;
        mayor = n3;
    }
else {
        medio = n3;
        mayor = n1;
    }
}
else {
    menor = n3;
    if (n1 <= n2) {
        medio = n1;
        mayor = n2;
    }

else {
        medio = n2;
        mayor = n1;
    }
}

//Mostrar datos
printf("\nLos números ordenados de menor a mayor son: %d, %d, %d\n", menor, medio, mayor);
}
