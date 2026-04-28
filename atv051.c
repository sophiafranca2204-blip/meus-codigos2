#include <stdio.h>
int main()
{
    int num1, num2, soma;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma % 2 == 0){
        printf("A soma dos numeros forma um numero par.\n");
    }
    else{
         printf("A soma dos numeros nao forma um numero par.\n");
    }
}