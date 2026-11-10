/* Leer los dos catetos de un triángulo rectángulo.
   Calcular la hipotenusa, el perímetro y el área.
*/
#include <stdio.h>
#include <math.h>

int main (){
//Pedir datos
float cateto1;
float cateto2;

printf("Ingresa el primer cateto: ");
scanf("%f", &cateto1);
printf("Ingresa el segundo cateto: ");
scanf("%f", &cateto2);

//Operaciones
float hipotenusa;
float perimetro;
float area;

// Teorema de Pitágoras e hipotenusa
hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

// Perímetro
perimetro = cateto1 + cateto2 + hipotenusa;

// Área (base por altura sobre 2)
area = (cateto1 * cateto2) / 2;

//Mostrar datos
printf("\nLa hipotenusa es: %.2f", hipotenusa);
printf("\nEl perímetro es: %.2f", perimetro);
printf("\nEl área es: %.2f\n", area);
}
