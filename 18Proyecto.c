/* Leer un mes (1 a 12) y un año. Mostrar el nombre del mes y cuántos días tiene,
   considerando años bisiestos para febrero. Si el mes no es válido, mostrar “Error de opción”.
*/
#include <stdio.h>

int main (){
//Pedir datos
int m;
int a;

printf("Ingresa el número de mes (1 al 12): ");
scanf("%d", &m);
printf("Ingresa el año: ");
scanf("%d", &a);

//Operaciones y Mostrar datos

// 1. Determinar si el año es bisiesto
int bisiesto = 0; // 0 significa No bisiesto, 1 significa Si bisiesto
if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
    bisiesto = 1;
}

// 2. Evaluar el mes y mostrar sus días
switch(m) {
    case 1:
        printf("\nMes: Enero");
        printf("\nTiene: 31 días\n");
        break;
    case 2:
        printf("\nMes: Febrero");
        if (bisiesto == 1) {
            printf("\nTiene: 29 días (Año bisiesto)\n");
        } else {
            printf("\nTiene: 28 días\n");
        }
        break;
    case 3:
        printf("\nMes: Marzo");
        printf("\nTiene: 31 días\n");
        break;
    case 4:
        printf("\nMes: Abril");
        printf("\nTiene: 30 días\n");
        break;
    case 5:
        printf("\nMes: Mayo");
        printf("\nTiene: 31 días\n");
        break;
    case 6:
        printf("\nMes: Junio");
        printf("\nTiene: 30 días\n");
        break;
    case 7:
        printf("\nMes: Julio");
        printf("\nTiene: 31 días\n");
        break;
    case 8:
        printf("\nMes: Agosto");
        printf("\nTiene: 31 días\n");
        break;
    case 9:
        printf("\nMes: Septiembre");
        printf("\nTiene: 30 días\n");
        break;
    case 10:
        printf("\nMes: Octubre");
        printf("\nTiene: 31 días\n");
        break;
    case 11:
        printf("\nMes: Noviembre");
        printf("\nTiene: 30 días\n");
        break;
    case 12:
        printf("\nMes: Diciembre");
        printf("\nTiene: 31 días\n");
        break;
    default:
        printf("\nError de opción\n");
        break;
}
}
