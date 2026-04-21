#include <stdio.h>
int main()
{
    float preco;

    printf("Digite o valor da conta de luz: ");
    scanf("%f", &preco);

    if(preco < 100){
        printf("Conta de luz economica!\n");
    }
    else if ((preco >= 100) && (preco <= 300 )){
        printf("Conta de luz media!\n");
    }
    else{
        printf("Conta de luz cara!\n");
    }

    return 0;
}