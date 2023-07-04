#include <stdio.h>
int main()
{
    int n_int = sizeof(int);
    int n_char = sizeof(char);
    int n_long = sizeof(long);

    struct estructura{
        int entero;
        char caracteres [10];
    };
    
    int n_struct = sizeof(struct estructura);
    float vector [5];
    int n_vector = sizeof(vector);

    printf("tamanyo de 1 entero = %d\n", n_int);
    printf("tamanyo de 1 char = %d\n", n_char);
    printf("tamanyo de 1 long = %d\n", n_long);
    printf("tamanyo de la estructura= %d\n", n_struct);
    printf("tamanyo del vector = %d\n", n_vector);
    
}