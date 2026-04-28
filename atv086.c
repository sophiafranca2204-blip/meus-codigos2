#include <stdio.h>
int main()
{
    int n1, n2;
    int soma, dif;

    printf("Digite dois numeros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2){
        dif =n1 - n2;
    }
    else{
        dif = n2 - n1;
    }

    soma = n1 + n2;

    if(dif> soma){
        printf("A diferenca entre os numeros e maior que a soma entre eles.\n");
    }
    else{
         printf("A diferenca entre os numeros nao e maior que a soma entre eles.\n");
    }


}