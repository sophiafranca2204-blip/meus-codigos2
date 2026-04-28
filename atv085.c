#include <stdio.h>
int main()
{
    float a, b, c;
    float media;

    printf("Digite tres valores: ");
    scanf("%f%f%f", &a, &b, &c);

    media = (a + b + c) / 3;

    if ((media > a) && (media > b) && (media > c)){
        printf("A media e maior que todos os valores.\n");
    }
    else{
         printf("A media NAO e maior que todos os valores.\n");
    }

    return 0;
}
