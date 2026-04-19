#include <stdio.h>
int main()
{
    float peso, altura, imc;
    
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf ("Seu imc e: %.2f\n", imc);

    if (imc < 18.5){
        printf ("Classificacao: Abaixo do peso\n");
    }
    else if (imc < 25){
        printf("Classificaca0: Peso normal\n");
    }
    else {
        printf("Classificacao: Acima do peso\n");
    }

    return 0;
}