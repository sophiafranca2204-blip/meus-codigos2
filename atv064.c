#include <stdio.h>
int main()
{
    float a, b;

    printf("Digite os valores de a e b: ");
    scanf("%f%f", &a, &b);

    if (a != 0){
        printf("A equacao tem solucao.\n");
    }
    else{
        if(b == 0){
            printf("A equacao possui infinitas solucoes.\n");
        }
        else{
            printf("A equacao nao possui solucao.\n");
        }
    }

    return 0;
}