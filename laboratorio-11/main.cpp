#include <stdio.h>
#include "./prototipos.h"

int opcion;

int main(){
opciones();
while ((opcion > 0) && (opcion < 6)){
    switch (opcion){
        case 1: listarAgenda();
                break;
        case 2: NombreArchivoCreado();
                break;
        case 3: CrearRegistro();
                break;
        case 4: EliminarRegistro();
                break; 
        case 5: EliminarAgenda();
                break;
        case 6: RevisarAgenda();
                break;  
        case 7: Salir();
                break;    
    }
    break;
}
    return 0;
}