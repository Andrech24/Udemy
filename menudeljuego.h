#include <stdio.h>
#include <stdlib.h>

#include "blackjack.h"

int main ()
{
    int opcion;

    menu ();
    scanf("%d",&opcion);

    while (opcion != 0){
        if (opcion == 1){
            printf("jugar partida\n");
        }
        else if (opcion ==2){
            printf("cargar partidas");
        }
        fflush(stdin);
        menu();
        scanf("%d",&opcion);
    }

    printf("BYE\n")
    
}