#include <stdio.h>
int main()
{
    int a, b, result;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    result = a - b;

    if (result > 0){
        printf("Resultado positivo.\n");
    }
    else if (result < 0){
        printf("Resultado negativo.\n");
    }
    else{
        printf("Resultado nulo.\n");
    }

    return 0;
    

}