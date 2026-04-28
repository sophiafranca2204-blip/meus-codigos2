#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6){
        printf("Parabens, voce foi aprovado!\n");
    }
    else {
        printf("Voce nao foi aprovado. Sua media e de %f.\n", media);
    }

    return 0;

    
    
}