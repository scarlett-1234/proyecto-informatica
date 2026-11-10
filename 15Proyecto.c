/* Leer los tres lados de un triángulo. Verificar que puedan formarlo y, en ese caso,
   clasificarlo por sus lados (equilátero, isósceles, escaleno) y por sus ángulos
   (acutángulo, rectángulo, obtusángulo).
*/
#include <stdio.h>

int main (){
//Pedir datos
float l1, l2, l3;

printf("Ingresa el primer lado: ");
scanf("%f", &l1);
printf("Ingresa el segundo lado: ");
scanf("%f", &l2);
printf("Ingresa el tercer lado: ");
scanf("%f", &l3);

//Operaciones y Validaciones

// 1. Verificar si los lados pueden formar un triángulo
if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
    printf("\nLos lados SI forman un triángulo.");

// 2. Clasificación por sus lados
if (l1 == l2 && l2 == l3) {
        printf("\nClasificación por lados: Equilátero");
    }
else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("\nClasificación por lados: Isósceles");
    }
else {
        printf("\nClasificación por lados: Escaleno");
    }

// 3. Clasificación por sus ángulos (Identificar primero cuál es el lado mayor)
    float a, b, c; // 'c' será el lado mayor, 'a' y 'b' los otros dos

if (l1 >= l2 && l1 >= l3) {
        c = l1; a = l2; b = l3;
    }
else if (l2 >= l1 && l2 >= l3) {
        c = l2; a = l1; b = l3;
    }
else {
        c = l3; a = l1; b = l2;
    }

// Aplicar teorema de Pitágoras extendido usando los cuadrados de los lados
    float c2 = c * c;
    float suma_cuadrados = (a * a) + (b * b);

// Margen para evitar errores de precisión decimal
if (c2 == suma_cuadrados) {
        printf("\nClasificación por ángulos: Rectángulo\n");
    }
else if (c2 < suma_cuadrados) {
        printf("\nClasificación por ángulos: Acutángulo\n");
    }
else {
        printf("\nClasificación por ángulos: Obtusángulo\n");
    }

}
else {
    printf("\nError: Los lados ingresados NO pueden formar un triángulo.\n");
}
}
