#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ((idade < 12) || (idade > 60)){
        printf("Voce paga meia.\n");
    }
    else {
        printf("Voce paga inteira.\n");
    }
}