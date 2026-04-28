#include <stdio.h>
int main()
{
    int id1, id2, diff;

    printf("Digite a primeira idade: ");
    scanf("%d", &id1);
    printf("Digite a segunda idade: ");
    scanf("%d", &id2);

    if(id1 > id2){
        diff = id1 - id2;
    }
    else{
        diff = id2 - id1;
    }

    printf("Diferenca de idade: %d ano(s)\n", diff );

    if(diff <= 2){
        printf("Diferenca pequena.\n");
    }
    else if(diff <= 10){
        printf("Diferenca media.\n");
    }
    else{
        printf("Diferenca grande.\n");
    }

    return 0;
}