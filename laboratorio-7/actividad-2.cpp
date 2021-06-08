#include <stdio.h>

int numero1;
int numero2;
int resultado;


int main(){

    printf("Ingrese dos números de la forma X, Y\n");
    scanf("%d, %d", &numero1, &numero2);

    for (int i = 0; i < numero2; i++)
    {
        resultado += numero1;
        
    }
    printf("%d * %d = %d\n", numero1, numero2, resultado);

   

    return 0;
}