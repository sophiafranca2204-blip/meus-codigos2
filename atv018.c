#include <stdio.h>
int main()
{
    int num1, num2;
    float media;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf ("%d", &num2);

    media = (num1 + num2) / 2;

    if (media > 7){
        printf("A media dos numeros e maior que 7.\n");
    }
    else if (media < 7) {
        printf("A media dos numeros NAO e maior que 7.\n");
    }
    else {
        printf("A media dos numeros e igual a 7.\n");
    }

    return 0;
}