#include <stdio.h>
int main()
{
    float venda;

    printf("Digite a venda: ");
    scanf("%f", &venda);

    if (venda < 1000){
        printf("Venda classificada como: pequena!\n");
    }
    else if ((venda >= 1000) && (venda < 10000)){
        printf("Venda classificada como: media!\n ");
    }
    else{
        printf("altura classificada como: grande!\n");
    }

    return 0;
}