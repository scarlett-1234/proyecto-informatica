/* Leer tres números. Si el primero es negativo, mostrar el producto de los tres;
   si es cero, mostrar la suma; si es positivo, mostrar el promedio.
*/
#include <stdio.h>

int main (){
//Pedir datos
float n1;
float n2;
float n3;

printf("Ingresa el primer número: ");
scanf("%f", &n1);
printf("Ingresa el segundo número: ");
scanf("%f", &n2);
printf("Ingresa el tercer número: ");
scanf("%f", &n3);

//Operaciones y Mostrar datos

// Evaluamos el primer número para decidir la operación
if (n1 < 0) {
    // Caso negativo: Producto
    float producto;
    producto = n1 * n2 * n3;
    printf("\nEl primer número es negativo. El producto de los tres es: %.2f\n", producto);
} else if (n1 == 0) {
    // Caso cero: Suma
    float suma;
    suma = n1 + n2 + n3;
    printf("\nEl primer número es cero. La suma de los tres es: %.2f\n", suma);
} else {
    // Caso positivo: Promedio
    float promedio;
    promedio = (n1 + n2 + n3) / 3;
    printf("\nEl primer número es positivo. El promedio de los tres es: %.2f\n", promedio);
}
}
