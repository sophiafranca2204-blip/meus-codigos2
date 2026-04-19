#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Parabens, voce ja pode dirigir!\n");
    }
    else {
        printf("Voce ainda nao pode dirigir!\n");
    }

    return 0;
}