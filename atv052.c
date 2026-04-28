#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);

    if (num1 * num2 < 0){
        printf("Os numeros tem sinais opostos.\n");
    }
    else{
        printf("Os numeros nao tem sinais opostos.\n");
    }

    return 0;
}