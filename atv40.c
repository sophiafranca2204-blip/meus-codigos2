#include <stdio.h>
int main()
{
    float valor, juros;
    int venc, pag;

    printf("Digite o valor do boleto: ");
    scanf("%f", &valor);
    printf("Digite o dia do vencimento: ");
    scanf("%d", &venc);
    printf("Digite o dia do pagamento: ");
    scanf("%d", &pag);

    if (pag > venc){
        juros = valor * 0.02;
        valor = valor + juros;
        printf("Pagamento com juros.\n");
    }
    else{
        printf("Pagamento sem juros.\n");    
    }

    printf("Valor final: R$ %.2f\n", valor);

    return 0;
    
}