#include <stdio.h>
int main()
{
    float valorCompra, valorPago, troco;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite o valor pago: ");
    scanf("%f", &valorPago);

    if(valorPago >= valorCompra){
        troco = valorPago - valorCompra;
        printf("Pagamnto suficiente.\n");
        printf("troco: R$ %.2f\n", troco);
    }
    else{
        printf("Pagamnto insuficiente.\n");
        printf("Faltam: R$ %.2f\n", valorCompra - valorPago);
    }

    return 0;


}