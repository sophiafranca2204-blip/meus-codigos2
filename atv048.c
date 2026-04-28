#include <stdio.h>
int main()
{
    float h;

    printf("Digite a altura: ");
    scanf("%f", &h);

    if (h < 1.6){
        printf("Altura classificada como: Baixa!\n");
    }
    else if ((h >= 1.6) && (h < 1.8)){
        printf("Altura classificada como: media!\n ");
    }
    else{
        printf("altura classificada como: alta!\n");
    }

    return 0;
}