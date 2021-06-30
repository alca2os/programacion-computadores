#include <stdio.h>

int cuadricula[10][10] = {
  {2, 9, 0, 0, 10, 9, 6, 10, 5, 4},
  {9, 6, 5, 0, 0, 9, 6, 3, 2, 8},
  {3, 3, 8, 10, 6, 9, 5, 4, 3, 9},
  {2, 6, 3, 6, 4, 3, 6, 2, 8, 3},
  {6, 6, 9, 10, 3, 4, 6, 2, 9, 9},
  {4, 10, 4, 4, 9, 0, 9, 10, 8, 8},
  {2, 2, 0, 3, 5, 4, 4, 6, 6, 5},
  {8, 4, 1, 3, 9, 5, 6, 6, 7, 7},
  {8, 1, 4, 9, 5, 7, 7, 3, 4, 4},
  {4, 8, 5, 4, 2, 3, 3, 2, 3, 6},
};
int fila;
int columna;
int misiones = 1; 
int totaldecuadriculas;
int tesoros; 


int main(){
    
    for(int i = 0 ; i < 10 ; i++){      
        for(int j = 0 ; j < 10 ; j++){  
            cuadricula[i][j] = '-';

        }
    }
    
        printf("BUSQUEDA DE TESOROS EN CUADRILLAS DE 10X10 KMS:\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[0][0], cuadricula[0][1], cuadricula[0][2], cuadricula[0][3], cuadricula[0][4], cuadricula[0][5], cuadricula[0][6], cuadricula[0][7], cuadricula[0][8], cuadricula[0][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[1][0], cuadricula[1][1], cuadricula[1][2], cuadricula[1][3], cuadricula[1][4], cuadricula[1][5], cuadricula[1][6], cuadricula[1][7], cuadricula[1][8], cuadricula[1][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[2][0], cuadricula[2][1], cuadricula[2][2], cuadricula[2][3], cuadricula[2][4], cuadricula[2][5], cuadricula[2][6], cuadricula[2][7], cuadricula[2][8], cuadricula[2][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[3][0], cuadricula[3][1], cuadricula[3][2], cuadricula[3][3], cuadricula[3][4], cuadricula[3][5], cuadricula[3][6], cuadricula[3][7], cuadricula[3][8], cuadricula[3][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[4][0], cuadricula[4][1], cuadricula[4][2], cuadricula[4][3], cuadricula[4][4], cuadricula[4][5], cuadricula[4][6], cuadricula[4][7], cuadricula[4][8], cuadricula[4][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[5][0], cuadricula[5][1], cuadricula[5][2], cuadricula[5][3], cuadricula[5][4], cuadricula[5][5], cuadricula[5][6], cuadricula[5][7], cuadricula[5][8], cuadricula[5][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[6][0], cuadricula[6][1], cuadricula[6][2], cuadricula[6][3], cuadricula[6][4], cuadricula[6][5], cuadricula[6][6], cuadricula[6][7], cuadricula[6][8], cuadricula[6][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[7][0], cuadricula[7][1], cuadricula[7][2], cuadricula[7][3], cuadricula[7][4], cuadricula[7][5], cuadricula[7][6], cuadricula[7][7], cuadricula[7][8], cuadricula[7][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[8][0], cuadricula[8][1], cuadricula[8][2], cuadricula[8][3], cuadricula[8][4], cuadricula[8][5], cuadricula[8][6], cuadricula[8][7], cuadricula[8][8], cuadricula[8][9]);
        printf("-----------------------------------------------------------------\n");
        printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadricula[9][0], cuadricula[9][1], cuadricula[9][2], cuadricula[9][3], cuadricula[9][4], cuadricula[9][5], cuadricula[9][6], cuadricula[9][7], cuadricula[9][8], cuadricula[9][9]);
        printf("-----------------------------------------------------------------\n");
        printf("-----------------------------------------------------------------\n");

        while(!tesoros)

        printf("INGRESE LAS COORDENADAS DE LA FORMA fila, columna, para saber los tesoros que se encuentren en esa ubicación:\n");
            scanf("%d, %d", &fila, &columna);
            
             if (misiones < 10)
             {
             printf("MISIones %d:\n COORDENADAS: (%d,%d) ----> Se han encontrado %d tesoros en este lugar.\n", misiones, fila, columna, cuadricula[fila-1][columna-1]);
             printf("Ingrese una nueva coordenada de la forma x,y para descubrir los tesoros que se encuentran en esta cuadricula:\n");
             scanf("%d,%d", &fila, &columna);
             misiones++;
  }
  


            
            
    
    return 0;
}