#include <stdio.h>

int edad;
int destino;

int main(){
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    printf("Ingrese su destino (1 - 2 - 3)\n");
    scanf("%d", &destino);

   
    if(edad < 15){
        if(destino == 1){
        printf("El valor del pasaje es de $2500\n");
        } else if(destino == 2){ 
        printf("El valor del pasaje es:\n $1200\n");
        } else { 
        printf("El valor del pasaje es de $2000\n");
        }

        } else if(edad < 65){
          if(destino == 1){
        printf("El valor del pasaje es de $4200\n");
        } else if(destino == 2){ 
        printf("El valor del pasaje es:\n $3000\n");
        } else { 
        printf("El valor del pasaje es de $3800\n");
        }

        } else {
          if(destino == 1){
        printf("El valor del pasaje es de $3000\n");
        } else if(destino == 2){ 
        printf("El valor del pasaje es:\n $2000\n");
        } else { 
        printf("El valor del pasaje es de $2500\n");
        }
        }  
         return 0;
         }
