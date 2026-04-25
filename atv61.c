#include <stdio.h>
int main()
{
    int num, modulo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0){
        num = -num;
    }
    else{
        modulo = num;
    }

    printf("O modulo do numero e: %d\n", num);

    return 0;
}