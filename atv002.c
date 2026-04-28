#include <stdio.h>
int main()
{
    int numero;
    printf("Escreva um numero:\n");
    scanf("%d", &numero);
    
    if (numero % 2 == 0){
        printf("Numero par");
    }
    else{
        printf("Numero impar");
    }

    return 0;
}