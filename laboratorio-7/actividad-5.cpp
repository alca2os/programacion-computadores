#include <stdio.h>

int numero1;
int suma;


int main(){ 
    printf("Sumatoria números positivos:\n");
    
    while(numero1 >= 0){
      printf("Ingrese un número:\n");
      scanf("%d", &numero1);

      suma = suma + numero1;

    }

    printf("La sumatoria es: %d:\n", suma);

	return 0;
}