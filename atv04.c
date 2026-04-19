#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);

    if ((numero % 2 == 0) && (numero % 5 == 0)){
        printf ("Numero divisivel por 2 e por 5.");
    }
    else {
        printf("Numero nao divisivel por 2 e por 5.");
    }

    return 0;
}