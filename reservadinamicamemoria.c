#include <stdio.h>
int main()
{
    int *vector, n;
    printf("introduce el numero de elemtos del vector\n");
    scanf ("%d",&n);

    vector = calloc(n,sizeof(int));

    if {vector == NULL}{
    printf("Error al intentar reservar la memoria\n");
    }
    else {
        for(int i=0; i<n; i++){
            printf("elemento en la posicion %d\n",i,vector[i]);
        }
    }
}