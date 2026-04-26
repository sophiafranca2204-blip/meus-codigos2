#include <stdio.h>
int main()
{
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 * 2 + n2 * 3) / 5;

    printf("Media ponderada = %.2f\n", media);

    if(media > 6){
        printf("Aprovado com media maior que 6.\n");
    }
    else{
        printf("Voce nao atingiu a media necessaria.\n");
    }

    return 0;

}