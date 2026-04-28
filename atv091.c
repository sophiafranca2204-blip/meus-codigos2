#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Digite tres numeros: ");
    scanf("%f%f%f", &a, &b, &c);

    if (3 * a> b + c){
        printf("O triplo do primeiro numero e maior.\n");
    }
    else{
        printf("A soma dos numeros e maior.\n");
    }

    return 0;
}