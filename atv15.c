#include <stdio.h>
int main()
{
    float num1, num2, num3;
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &num2);
    printf ("Digite o terceiro numero: ");
    scanf ("%f", &num3);

    if ((num1 < num2) && (num2 < num3)){
        printf("Os numeros estao em ordem crescente.\n");
    }
    else {
        printf("Os numeros nao estao em ordem crescente.\n");
    }

    return 0;
}
