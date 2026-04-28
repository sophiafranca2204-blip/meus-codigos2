#include <stdio.h>
int main()
{
    int n1, n2, n3;
    int result;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    result = n1 * n2 * n3;

    if(result > 0){
        printf("Multiplicacao com resultado positivo.\n");
    }
    else if (result < 0){
        printf("Multiplicacao com resultado negativo.\n");
    }
    else{
        printf("O resultado e zero.\n");
    }

    return 0;
}