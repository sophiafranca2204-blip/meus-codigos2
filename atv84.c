#include <stdio.h>
int main()
{
    int n1, n2, dif;

    printf("Digite dois numeros: ");
    scanf("%d%d", &n1, &n2);

    dif = n1 - n2;
    if (dif < 0){
        dif = - dif;
    }

    if(dif % 2 == 0){
        printf("A diferenca absoluta e par.\n");
    }
    else{
        printf("A diferenca absoluta e impar.\n");
    }

    return 0;
}