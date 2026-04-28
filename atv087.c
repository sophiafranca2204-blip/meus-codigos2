#include <stdio.h>
int main()
{
    int num; 
    int dist50;
    int dist100;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 50){
        dist50 = num - 50;
    }
    else{
        dist50 = 50 - num;
    }

    if(num > 100){
        dist100 = num - 100;
    }
    else{
        dist100 = 100 - num;
    }

    if (dist50 < dist100){
        printf("Mais prox de 50.\n");
    }
    else if(dist100 < dist50){
        printf("Mais prox de 100.\n");
    }
    else{
        printf("O numero esta no meio.\n");
    }

    return 0;
}