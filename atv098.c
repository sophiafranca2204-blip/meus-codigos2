#include <stdio.h>
int main()
{
    float largura, compr, area;
    float limite = 100.0;

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite o comprimento: ");
    scanf("%f", &compr);

    area = largura * compr;

    printf("Area calculada: %.2f\n", area);

    if(area > limite){
        printf("Area ultrapassa o limite.\n");
    }
    else{
        printf("Area dentro do limite de seguranca.\n");
    }

    return 0;
}