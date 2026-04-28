#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num < 0) || (num > 10)){
        printf("Numero invalido!\n");
    }
    else if ((num == 2) || (num == 3) || (num == 5) || (num == 7)){
        printf("O numero e primo!\n");
    }
    else {
        printf("O numero nao e primo!\n");
    }

    return 0;
}