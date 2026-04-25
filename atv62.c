#include <stdio.h>
int main()
{
    int a, b, soma;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    soma = a + b;

    if((soma == 1) || (soma == 4) || (soma == 9) || (soma == 16) || (soma == 25) || (soma == 36) || (soma ==49) || (soma == 64) || (soma == 81) || (soma == 100 )){
        printf("A soma %d e um quadrado perfeito entre 1 e 100.\n", soma);
    }
    else{
        printf("A soma %d nao e um quadrado perfeito entre 1 e 100.\n", soma);
    }

    return 0;
}