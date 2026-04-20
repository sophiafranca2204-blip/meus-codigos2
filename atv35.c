#include <stdio.h> 
int main()
{
    float distancia, valor;

    printf("Digite a distancia(km): ");
    scanf("%f", &distancia);

    if (distancia <= 200){
        valor = distancia * 0.50;
    }
    else {
        valor = distancia * 0.45;
    }

    printf("Valor da passagem: R$ %.2f\n", valor);

    return 0;
}