#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);

    if ((numero % 2 != 0) && (numero % 3 != 0) && (numero % 5 != 0)){
        printf ("O umero NAO e multiplo de 2, 3 ou 5.\n");
    }
    else {
        printf("O numero E multiplo de 2, 3 ou 5.\n");
    }

    return 0;
}