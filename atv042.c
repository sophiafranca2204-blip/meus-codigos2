#include <stdio.h> 
int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 0){
        if (idade < 13){
            printf("Atleta infantil.\n");
        }
        else if((idade >= 13) && (idade <=17)){
            printf("atleta juvenil.\n");
        }
        else {
            printf("Atleta adulto.\n");
        }
    }
    else{
        printf("Idade invalida!");
    }

    return 0;
}