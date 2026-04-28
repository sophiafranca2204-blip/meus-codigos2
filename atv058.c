#include <stdio.h>
int main()
{
    int num, max, mini;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite um numero minimo: ");
    scanf("%d", &mini);
    printf("Digite um numero maximo: ");
    scanf("%d", &max);

    if((num > max) || (num < mini)){
        printf("O numero nao esta entre os numeros ditos.\n");
    }
    else{
        printf("O numero esta entre os numeros ditos.\n");
    }

    return 0;


}