#include <stdio.h>

float numero1;
float numero2;
float producto;

int main (){
    printf("Ingrese el primer número\n");
    scanf("%f", &numero1);
    printf("Ingrese el segundo número\n");
    scanf("%f", &numero2);
    producto = numero1 * numero2;
    printf("El resultado del producto entre %f y %f es %f\n", numero1, numero2, producto);
    return 0;

}
