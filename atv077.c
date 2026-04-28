#include <stdio.h>
int main()
{
    int a, b;
    int dif;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    if(a > b){
        dif = a - b;
    }
    else{
        dif = b - a;
    }

    if(dif > 20){
        printf("A diferenca absoluta e maior que 20.\n");
    }
    else{
        printf("A diferenca absoluta nao e maior que 20.\n");
    }

    return 0;
    
}