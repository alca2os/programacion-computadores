  #include <stdio.h>

int numero1;
int numero2;
int numero3;

int main(){
    printf("Ingresar el primer número\n");
    scanf("%d", &numero1);
    printf("Ingresar el segundo número\n");
    scanf("%d", &numero2);
    printf("Ingresar el tercer número\n");
    scanf("%d", &numero3);

    if((numero1 == numero2) && (numero1 == numero2)){
        printf("Los 3 números son iguales\n");
    }else if((numero1 > numero2) && (numero1 > numero2)){
        printf("%d es el mayor de los 3\n", numero1);
    }else if((numero2 > numero1) && (numero2 > numero3)){
        printf ("%d es el mayor de los 3\n", numero2);
    } else{
        printf ("%d es el mayor de los 3\n", numero3);
    }  
      return 0;
}