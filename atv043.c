#include <stdio.h>
int main()
{
    float valor;

    printf("Digite o valor do seu investimento: ");
    scanf("%f", &valor);

    if(valor <= 1000){
        printf("Investimento de baixo risco.\n");
    }
    else if((valor > 1000) && (valor <= 5000)){
        printf("Investimento de medio risco,\n");
    }
    else{
        printf("Investimento de alto risco.\n");
    }

    return 0;
}