#include <stdio.h>
int main()
{
    int n;

    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &n);

    if((n == 1) || (n == 2) || (n == 4) || (n == 8) || (n == 16) || (n == 32) || (n == 64)){
        printf("E potencia de 2.\n");
    }
    else{
        printf("NAO e potencia de 2.\n");
    }

    return 0;
}