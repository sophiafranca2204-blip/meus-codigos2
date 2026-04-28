#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num >= 1) && (num <= 9)){
        printf("Unidade!\n");
    }
    else if ((num >= 10) && (num <= 99)){
        printf("Dezena!\n");
    }
    else if((num >= 100) && (num <= 999)){
        printf("Centena!\n");
    }
    else{
        printf("Numero fora do intervalo de 1 a 999!\n");
    }

    return 0;
}