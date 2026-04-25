#include <stdio.h>
int main()
{
    int num;
    int c, d, u;
    int soma, quadrado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if((num < 100) || (num > 999)){
        printf("Numero invalido.\n");
        return 0;
    }

    c = num / 100;
    d = (num / 10) % 10;
    u = num % 10;

    soma = c + d + u;
    quadrado = soma * soma;

    if (quadrado == num){
        printf("O numero %d e igual ao quadrado da soma dos digitos.\n", num);
    }
    else{
        printf("O numero %d nao e igual ao quadrado da soma dos digitos.\n", num);
    }

    return 0;


}