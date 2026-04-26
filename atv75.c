#include <stdio.h>
int main()
{
    float r, area;
    float pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("area = %.2f\n", area);

    if(area > 50){
        printf("A area e maior que 50\n");
    }
    else{
        printf("A area nao e maior que 50\n");
    }

    return 0;
}