#include <stdio.h>
int main()
{
    int num, ini, fim;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &ini);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    if ((num < ini) || (num > fim)){
        printf("O numero esta fora do intervalo.\n");
    }
    else{
        printf("O numero esta dentro do intervalo.\n");
    }

    return 0;
    
    
}