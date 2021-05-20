#include <stdio.h>

int clave = 0;
int clavecorrecta = 20398323;

int main(){
    printf("Ingrese su clave de acceso (RUT sin código verificador)\n");
    scanf("%d", &clave);

    if(clavecorrecta == clave){
        printf("La clave es correcta, bienvenid@\n");
    } else{
        printf("ERROR\n");
        printf("Ingrese nuevamente su clave\n");
        scanf("%d", &clave);
        }
    
    if(clavecorrecta == clave){
        printf("La clave es correcta, bienvenid@\n");
    } else{
        printf("ERROR\n");
        printf("Ingrese nuevamente su clave\n");
        scanf("%d", &clave);
        }

    if(clavecorrecta == clave){
        printf("La clave es correcta, bienvenid@\n");
    } else{
        printf("ERROR\n");
        printf("Usuario bloqueado");
        }
return 0;
}