#include <stdio.h>
int main()
{
    float base, area, altura;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    if(area < 50){
        printf("Area pequena.\n");
    }
    else if(area <= 200){
        printf("Area media.\n");
    }
    else{
        printf("Area grande.\n");
    }

    return 0;
}