#include <stdio.h>

int main()
{
    int n, contador_aprobados, contador_suspensos;

    printf("introduce el numero de alumnos");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++){
        printf("introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);
        
        if(nota>=5){
            contador_aprobados++;
        }
        else{
            contador_suspensos++;

        }
    }
    printf("El numero de alumnos aprobados es: %d y el de alumnos suspensos es: %d\n"contador_aprobados ,contador_suspensos);
    
}