#include <stdio.h>
int main()
{
    int a, b, soma;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    soma = a*a*a + b*b*b;

    if(soma > 500){
        printf("A soma dos cubos e maior que 500.\n");
    }
    else{
        printf("A soma dos cubos nao e maior que 500.\n");
    }

    return 0;
}