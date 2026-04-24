#include <stdio.h>
int main()
{
    int v1, v2, v3, media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    media = (v1 + v2 + v3) / 3;

    if ((media > v1) &&(media > v2) && (media > v3)){
        printf("A media entre os valores e maior que todos eles individualmente.\n");
    }
    else{
         printf("A media entre os valores nao e maior que todos eles individualmente.\n");
    }

    return 0;
    
}