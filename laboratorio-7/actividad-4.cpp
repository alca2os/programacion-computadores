#include <stdio.h>

int numero1;
int divisor;
int valor;

int main(){ 
    printf("Ingrese un número:\n");
    scanf("%d", &numero1);

  for(int i = 1; i < numero1; i++){
    valor = i;
    for(int i = 1; i <= valor; i++){
        if(valor%i == 0){ 
        divisor = divisor + 1;
        }
      }
        if(divisor == 2){
      printf("%d\n", valor);
      }
      divisor = 0;
    }
	return 0;
}