#include <stdio.h>
int main()
{
    int num;
    printf ("Digite um numero:\n");
    scanf("%d", &num);

    if (num > 0){
        printf("O numero e maior que zero.");
    } 
    else if (num < 0){
        printf ("O numero e menor que zero.");
    }
    else {
        printf ("O numero e igual a zero");
    }

    return 0;
}