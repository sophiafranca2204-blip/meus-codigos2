#include <stdio.h>
int main()
{
    float valor, valorF;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    valorF = valor * 1.18;

    if (valorF > 200){
        printf("O valor final (%2.f) ultrapassou 200 reais.\n", valorF);
    }
    else {
        printf("O valor final (%2.f) nao ultrapassou 200 reais.\n", valorF);
    }

    return 0;
}