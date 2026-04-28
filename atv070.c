#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Digite tres lados: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > c){
        a = a + c;
        c = a - c;
        a = a - c;
    }

    if (b > c){
        b = b + c;
        c = b - c;
        b = b - c;
    }

    if(a * a + b * b == c * c){
        printf("forma um triangulo retangulo.");
    }
    else{
        printf("Nao forma um triangulo retangulo.");
    }

    return 0;
}