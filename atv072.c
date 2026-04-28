#include <stdio.h>
int main()
{
    int n, fat;

    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &n);

    if(n == 1){
        fat = 1;
    }
    else if(n == 2){
        fat = 2;
    }
    else if(n == 3){
        fat = 6;
    }
    else if(n == 4){
        fat = 24;
    }
    else if(n == 5){
        fat = 120;
    }
    else{
        printf("Numero invalido.\n");
        return 0;
    }

    printf("Fatorial de %d = %d\n ", n, fat);

    if(fat <= 10){
        printf("Classificacao: pequeno.\n");
    }
    else if(fat <= 60){
        printf("Classificacao: medio.\n");
    }
    else{
        printf("Classificacao: grande.\n");
    }

    return 0;
}