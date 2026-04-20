#include <stdio.h>
int main()
{
    int quantidade;
    float preco, total, desconto;

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    if (quantidade <= 10){
        desconto = total * 0.05;
    }
    else{
        desconto = total * 0.10;
    }

    printf("Total com desconto: R$ %.2f\n", total - desconto);

    return 0;

    
}