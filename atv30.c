#include <stdio.h>
int main()
{
    int ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    if (ano > 2008){
        printf("Voce ainda nao e maior de idade.\n");
    }
    else {
        printf("Parabens, voce ja e de maior!\n");
    }

    return 0;
}