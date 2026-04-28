#include <stdio.h>
int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if ((valor >=70) && (valor <=90)){
        printf("O valor esta dentro da zona de risco.\n");
    }
    else{
         printf("O valor nao esta dentro da zona de risco.\n");
    }

    return 0;
}