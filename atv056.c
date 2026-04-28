#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if((num < 0) && (num % 2 == 0)){
        printf("Numero negativo e par.\n");
    }
    else if((num < 0) && (num % 2 != 0)){
        printf("Numero negativo e impar.\n");
    }
    else if((num > 0) && (num % 2 == 0)){
        printf("Numero positivo e par.\n");
    }
    else if((num > 0) && (num % 2 != 0)){
        printf("Numero positivo e impar.\n");
    }
    else{
        printf("Elemento neutro (0).\n");
    }

    return 0;
}