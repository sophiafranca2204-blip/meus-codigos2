#include <stdio.h>
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0){
        n = -n;
    }

    if (n <= 9){
        printf("Unidade.\n");
    }
    else if (n <= 99){
        printf("Dezena.\n");
    }
    else if (n <= 999){
        printf("Centena.\n");
    }
    else if (n <= 9999){
        printf("Milhar.\n");
    }
    else{
        printf("Numero com 5 ou mais digitos.\n");
    }

    return 0;
}