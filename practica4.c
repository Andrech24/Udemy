#include <stdio.h>

int main()
{
    int dinero;
    printf("Introduce el dinero que quieres convertir\n");
    scanf("%f",&dinero);

    printf("%2.f dinero equivalen a %.2f centavos",dinero,dinero*166.386);


}