#include <stdio.h>

int main()
{
    char cadena [50];
    char caracter;

    printf("introduce una cadena\n");
    gets(cadena);
    printf("introduce un caracter\n");
    caracter = getchar();

    int i = 0;
    int pos = -1;
    while (cadena[i] != '\0' && pos == -1) {
        if (cadena [i] == caracter){
            pos = i;
        } 
        i = i + 1;
    }
    
    if (pos != -1){
        printf("El caracter %c se encuenta en la cadena $s en la posicion %d", caracter,cadena,pos);

    }
    else{
        printf("El caracter %c no se encuentra en la cadena %s", caracter,cadena);
    }
}