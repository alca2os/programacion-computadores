#include  <stdio.h> 

int opcion;
int numero1;
int numero2;
int resultado;

int main(){
    printf("---------------------------\n");
    printf("--------BIENVENIDO---------\n");
    printf("------------A--------------\n");
    printf("-------LA CALCULADORA------\n");
    printf("---------------------------\n");

    printf("¿Cuál operación quiere realizar?\n");
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACIÓN\n");
    printf("4.- DIVISIÓN\n");

    scanf("%d", &opcion);

    switch (opcion){
        case 1: printf("Ingrese el primer número\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número\n");
                scanf("%d", &numero2);
                resultado = numero1 + numero2;
                printf("La suma entre %d y %d es: %d\n numero1, numero2, resultado");
                break;

        case 2: printf("Ingrese el primer número\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número\n");
                scanf("%d", &numero2);
                resultado = numero1 - numero2;
                printf("La resta entre %d y %d es: %d\n numero1, numero2, resultado");
                break;

        case 3: printf("Ingrese el primer número\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número\n");
                scanf("%d", &numero2);
                resultado = numero1 * numero2;
                printf("La multiplicación entre %d y %d es: %d\n numero1, numero2, resultado");
                break;

        case 4: printf("Ingrese el primer número\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número\n");
                scanf("%d", &numero2);
                resultado = numero1 / numero2;
                printf("La división entre %d y %d es: %d\n numero1, numero2, resultado");

                break;
        default: printf("OPERACION NO ENCONTRADA\n");       
        }

    

    return 0; 

}