#include <stdio.h> 
int main()
{
    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c );

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Triangulo valido\n");
    }
    else{
        printf("Triangulo invalido\n");
    }

    return 0;
}