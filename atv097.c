#include <stdio.h>
int main()
{
    float num;
    float decm;

    printf("Digite um numero: ");
    scanf("%f", &num);

    decm = num - (int)num;

    if(decm < 0){
        decm = -decm;
    }

    if((decm > 0.49) && (decm < 0.51)){
        printf("O numero termina em .5(aprox).\n");
    }
    else{
        printf("O numero nao termina em .5");
    }

    return 0;
   
}