#include <stdio.h>
int main()
{
    int a, b;
    int produto, soma;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &a);
    printf ("Digite o segundo numero: ");
    scanf ("%d", &b);

    produto = a * b;
    soma = a + b;

    if (produto > soma){
        printf("O produto e maior que a soma\n");
    }
    else {
        printf ("O produto NAO e maior que a soma\n");
    }

    return 0;
}