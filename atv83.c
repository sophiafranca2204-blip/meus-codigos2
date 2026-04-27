#include <stdio.h>
int main()
{
    int a, b, dif;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    if ((a - b > 10) || (b - a > 10)){
        printf("Os numeros estao a mais de 10 unidades de distancia.\n");
    }
    else{
        printf("Os numeros NAO estao a mais de 10 unidades de distancia.\n");
    }

    return 0;
}