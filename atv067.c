#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        if ((a == b) && (b == c)){
            printf("Triangulo equilatero.\n");
        }
        else if((a == b) || (a == c) || (b == c)){
            printf("Triangulo isosceles.\n");
        }
        else{
            printf("Triangulo escaleno.\n");
        }
    }
    else{
        printf("Nao forma um triangulo.\n");
    }

    return 0;

}