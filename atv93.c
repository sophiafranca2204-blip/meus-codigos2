#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Digite tres numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    if(c == 0){
        printf("Nao e possivel verificar.\n");
    }
    else if((a + b) % c == 0){
        printf("A soma dos valores e multiplo do terceiro numero.\n");
    }
    else{
        printf("A soma dos valores NAO e multiplo do terceiro numero.\n");
    }

    return 0;
}