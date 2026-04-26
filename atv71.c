#include <stdio.h>
int main()
{
    int valor1, valor2, result;

    printf("Digite um valor: ");
    scanf("%d", &valor1);
    printf("Digite mais um valor: ");
    scanf("%d", &valor2);

    result = valor1 * valor2;

    if(result > 1000){
        printf("O resultado execede 1000.\n");
    }
    else{
        printf("O resultado NAO execede 1000.\n");
    }

    return 0;

}