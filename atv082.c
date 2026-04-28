#include <stdio.h>
int main()
{
    int num; 

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0){
        num = -num;
    }

    if(num < (100 - num)){
        printf("O numero esta mais proximo de 0.\n");
    }
    else if(num > (100 - num)){
        printf("O numero esta mais proximo de 100.\n");
    }
    else{
        printf("Mesma distancia entre 0 e 100.\n");
    }

    return 0;
}