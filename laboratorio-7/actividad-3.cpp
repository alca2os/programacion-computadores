#include  <stdio.h>

int valor;
int numero1;

int  main () {

 printf("ingrese un número\n");

 scanf("%d", &numero1);

 printf("los divisores son:\n");

for(int i = 1 ; i <= numero1; i ++) {

valor=(numero1%i);

if(valor!=0){

  continue;
}

  printf ("%d\n", i);

}

return  0;

}