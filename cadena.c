#include <stdio.h>

int main()
{
    char cadena [100] = "esto es una cadena ";
    char cadena2[100] = "esto es una cadena\0";
    char cadena3[100] = {'e','s','t','o','\0'};

    for (int i=0; i<100; i++){
        printf("%c",cadena[i]);
    }
    printf("\n");
    cadena[3] ='A';
    printf("%c\n",cadena3);

    printf("%s\n",cadena3);

    printf("Introduce una cadena\n");
    gets(cadena3);
    printf("%s",cadena3);
}