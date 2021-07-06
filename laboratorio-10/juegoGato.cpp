#include "./juegoGato.h"
#include <stdio.h>



void inicializarTablero(char tablero[3][3]){  
    for(int i = 0 ; i < 3 ; i++){      
        for(int j = 0 ; j < 3 ; j++){  
            tablero[i][j] = '-';
        }
    }
}


void imprimirTablero(char tablero[3][3]){   
    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}

void ingresarJugada(int turnos, char tablero[3][3]){
    int fila;
    int columna;
    if(turnos%2 == 0){

            printf("JUGADOR O: Ingrese la jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);    

            while (tablero[fila-1][columna-1] != '-'){
                printf("No se puede realizar esta jugada. Por favor ingrese otra:\n");
                scanf("%d,%d", &fila, &columna);
            }  
            tablero[fila-1][columna-1] = 'O';

        } else {
            printf("JUGADOR X: Ingrese la jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);
            while(tablero[fila-1][columna-1] != '-'){
                printf("No se puede realizar esta jugada. Por favor ingrese otra:\n");
                scanf("%d,%d", &fila, &columna);
            }  
            tablero[fila-1][columna-1] = 'X';
        }
}


bool revisarGanador(char tablero[3][3]){
    bool ganador = false;
    //filas
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("GANADOR!");
            ganador = true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("GANADOR!");
            ganador = true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("GANADOR!");
            ganador = true;
        }

        //columnas
        if((tablero[0][0] == tablero[1][0]) && (tablero[2][0] == tablero[1][0]) && (tablero[0][0] != '-')){
            printf("GANADOR!");
            ganador = true;
        }
        if((tablero[1][1] == tablero[0][1]) && (tablero[2][1] == tablero[1][1]) && (tablero[1][1] != '-')){
            printf("GANADOR!");
            ganador = true;
        }
        if((tablero[2][2] == tablero[1][2]) && (tablero[2][2] == tablero[0][2]) && (tablero[2][2] != '-')){
            printf("GANADOR!");
            ganador = true;
        }

        //diagonales
        if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("GANADOR!");
            ganador = true;
        }
        if((tablero[2][0] == tablero[1][1]) && (tablero[1][1] == tablero[0][2]) && (tablero[1][1] != '-')){
            printf("GANADOR!");
            ganador = true;
        }

 return 0;

}

