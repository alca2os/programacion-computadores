#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int opcion;
char nombreArchivo[30];
FILE * archivo;
FILE * archivo_temp;
char nombre[15];
char apellido[20];
char telefono[20]; 
char contactoEliminar[15]; 

void opciones(){
    printf("--- AGENDA CONTACTOS ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Añadir un registro en una agenda\n");
    printf("4.- Eliminar un registro en una agenda\n");
    printf("5.- Eliminar una agenda\n");
    printf("6.- Revisar una agenda\n");
    printf("7.- Salir\n");
    printf("Seleccione una opción:\n");
    scanf("%d", &opcion);
}
void listarAgenda(){
     printf("Listar\n");
     system("ls *.txt"); 
            
}
void NombreArchivoCreado(){
    printf("Ingrese el nombre del archivo que se creara:\n");
    scanf("%s", nombreArchivo);
    printf("Nombre del archivo: %s\n", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    archivo = fopen(nombreArchivo, "w");
    fclose(archivo);
}
void CrearRegistro(){
    printf("Los archivos disponibles son:\n");
    system("ls *.txt"); 
    printf("Ingrese el nombre del archivo donde quiere agregar un registro:\n");
    scanf("%s", nombreArchivo);
    archivo = fopen(nombreArchivo, "a+");
    printf("Ingrese el nombre del contacto:\n");
    scanf("%s", nombre);
    printf("Ingrese el apellido del contacto:\n");
    scanf("%s", apellido);
    printf("Ingrese el teléfono del contacto:\n");
    scanf("%s", telefono);
    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    fclose(archivo);
}

void EliminarRegistro(){
    printf("Los archivos disponibles son:\n");
    system("ls *.txt"); 
    printf("Ingrese el nombre del archivo donde quiere eliminar:\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    archivo = fopen(nombreArchivo, "r");
    while(!feof(archivo)){
    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    printf("%s %s %s", nombre, apellido, telefono);
    }
    printf("Ingrese el nombre del contacto que quiere eliminar:\n");
    scanf("%s", contactoEliminar);
    rewind(archivo);
    archivo_temp = fopen("temp.txt", "w");
    while(!feof(archivo)){
    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    printf("%s %s %s", nombre, apellido, telefono);
    if(strcmp(contactoEliminar, nombre) == 0){
                        
    }else{
    fprintf(archivo_temp, "%s %s %s", nombre, apellido, telefono);
         }
    }
    fclose(archivo);
    remove(nombreArchivo);
    rename("temp.txt", nombreArchivo);
}

void EliminarAgenda(){
    printf("Los archivos disponibles son:\n");
    system("ls *.txt"); 
    printf("Ingrese el nombre del archivo que quiere eliminar:\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    remove(nombreArchivo);
}

void RevisarAgenda(){

    printf("Los archivos disponibles son:\n");
    system("ls *.txt"); 
    printf("Ingrese el nombre del archivo que quiere revisar:\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    archivo = fopen(nombreArchivo, "r");
    while(!feof(archivo)){
        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
        printf("%s %s %s", nombre, apellido, telefono);
    }
}

void Salir(){
    printf("Salir\n");
}








