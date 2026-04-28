#include <stdio.h>
int main()
{
    float n1, n2, n3;
    float media;

    printf("Digite as tres notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    if(media >= 6){
        printf("Voce foi aprovado com a media de: %.2f\n", media);
    }
    else{
        printf("Voce NAO foi aprovado com a media de: %.2f\n", media);
    }

    return 0;

}