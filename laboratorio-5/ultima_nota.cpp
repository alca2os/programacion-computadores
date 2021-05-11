#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float notaminima = 4.0;
float notaprueba2;

int  main() {
    printf (" Bienvenid@ a la aplicación que sirve para calcular tu nota\n");
    printf("Ingrese su nota obtenida en la Tarea 1");
    scanf("%f", &tarea1);
    printf("Ingrese su nota obtenida en la Tarea 2");
    scanf("%f", &tarea2);
    printf("Ingrese su nota obtenida en la Tarea 3");
    scanf("%f", &tarea3);
    printf("Ingrese su nota Actitudinal");
    scanf("%f", &actitudinal);
    printf("Ingrese su nota obtenida en la Prueba 1");
    scanf("%f", &prueba1);
    notaprueba2 = 4.0/0.35-(tarea1 * 0.28571)-(tarea2 * 0.28571)-(tarea3 * 0.28571)-(actitudinal * 0.28571)-(prueba1 * 0.714285); 
    printf("La nota minima que se puede obtener en la Prueba 2 para aprobar el curso es %f\n", notaprueba2);

    return 0;
    
}



 
