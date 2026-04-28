#include <stdio.h>
int main()
{
    float receita, custo;

    printf("Digite receita: ");
    scanf("%d", &receita);

    printf("Digite o custo: ");
    scanf("%d", &custo);

    if(receita > custo){
        printf("Houve lucro.\n");
    }
    else if(receita == custo){
        printf("Nao houve lucro, nem prejuizo.\n");
    }
    else{
        printf("Houve prejuizo.\n");
    }

    return 0;
}