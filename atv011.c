#include <stdio.h>
int main()
{
    float num1, num2, diferenca;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    diferenca = num1 - num2;

    if ((diferenca < 10) && (diferenca > -10)){
        printf ("A diferenca entre os numeros eh menor que 10.");
    }
    else{
        printf ("A diferenca entre os numeros eh igual a 10.\n");
    }

    return 0;
}