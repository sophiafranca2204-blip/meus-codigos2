#include <stdio.h>
int main()
{
    float temp;
    float media = 25.0;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if(temp > media){
        printf("temperatura acima da mdia mensal.\n");
    }
    else if(temp == media){
        printf("temperatura igual a media mensal.\n");
    }
    else{
         printf("temperatura abaixo da media mensal.\n");
    }

    return 0;
}