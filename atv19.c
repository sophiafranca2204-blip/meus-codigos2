#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);

    if ((numero % 4 == 0) || (numero % 6 == 0)){
        printf ("Numero multiplo de 4 ou de 6.\n");
    }
    else {
        printf("Numero nao multiplo nem de 4 nem de 6.\n");
    }

    return 0;
}