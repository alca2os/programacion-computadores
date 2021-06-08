#include <stdio.h>

int valor1=0;
int valor2=1;
int resultado;
int numero;

int main(){ 
  printf("Ingrese un número (el cual corresponderá a la cantidad de elementos de la Sucesión de Fibonacci):\n");
  scanf("%d", &numero);
  printf("%d\n", valor1);
  printf("%d\n", valor2);

  for(int i = 0; i < numero; i++){
    resultado = valor1 + valor2;
    valor1 = valor2;
    valor2 = resultado;

    printf("%d\n", resultado);
  }

  return 0;
}