#include <stdio.h>
int main()
{
    int num1, num2;
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &num2);

    if (num1 < num2){
        printf ("Os numeros formam um par ordenado crescente.\n");
    }
    else {
        printf ("Os numeros NAO formam um par ordenado crescente.\n");
    }

    return 0;
}