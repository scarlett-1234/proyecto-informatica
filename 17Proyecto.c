/* Leer un número del 1 al 7 y mostrar el día de la semana correspondiente,
   indicando si es día laboral o fin de semana. Si el número no es válido,
   mostrar “Error de opción”.
*/
#include <stdio.h>

int main (){
//Pedir datos
int dia;

printf("Ingresa un número del 1 al 7: ");
scanf("%d", &dia);

//Operaciones y Mostrar datos
switch(dia) {
    case 1:
        printf("\nEl día es: Lunes");
        printf("\nTipo: Día laboral\n");
        break;
    case 2:
        printf("\nEl día es: Martes");
        printf("\nTipo: Día laboral\n");
        break;
    case 3:
        printf("\nEl día es: Miércoles");
        printf("\nTipo: Día laboral\n");
        break;
    case 4:
        printf("\nEl día es: Jueves");
        printf("\nTipo: Día laboral\n");
        break;
    case 5:
        printf("\nEl día es: Viernes");
        printf("\nTipo: Día laboral\n");
        break;
    case 6:
        printf("\nEl día es: Sábado");
        printf("\nTipo: Fin de semana\n");
        break;
    case 7:
        printf("\nEl día es: Domingo");
        printf("\nTipo: Fin de semana\n");
        break;
    default:
        printf("\nError de opción\n");
        break;
}
}
