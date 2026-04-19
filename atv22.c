#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16){
        printf("Parabens, voce ja pode votar!\n");
    }
    else {
        printf("Voce ainda nao pode votar!\n");
    }

    return 0;
}