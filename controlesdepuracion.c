#include <stdio.h>

int main()
{
    int n_op;
    printf("introduce numero de operaciones a realizar\n");
    scanf("%d",&n_op);

    for (int i=0; i<n_op; i++){
        int op1, op2;
        printf("introduce operando 1\n");
        scanf("%d",&op1);
        printf("introduce operando 2\n");
        scanf("%d",&op2);
        int s = suma(op1,op2);
        int r = resta (op1,op2);
        printf("suma = %d, resta = %d\n",s,r);
    }

    printf("FIN");
}