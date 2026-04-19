#include <stdio.h>
int main()
{
    float valor, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    if (valor > 100){
        valorFinal = valor - (valor * 0.10);
        printf("Desconto aplicado!\n");
    }
    else{
        valorFinal  = valor;
        printf("Sem desconto!\n");
    }

    printf("Valor final: %2.f\n", valorFinal);

    return 0;
}