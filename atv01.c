#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);
    
    if (numero < 0){
        printf("Numero negativo.");
    }
    else {
        printf ("Numero positivo");
    }

    return 0;
}