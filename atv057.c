#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num % 2 == 0) || (num % 3 == 0)){
        printf("Numero divisivel por 2 ou por 3.\n");
    }
    else{
        printf("Numero nao divisivel por 2 ou por 3.\n");
    }

    return 0;
}