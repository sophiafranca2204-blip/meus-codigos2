#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);

    if (numero % 3 == 0){
        printf("Numero multiplo de 3.");
    }
    else {
        printf("Numero nao multiplo de 3.");
    }

    return 0;
}