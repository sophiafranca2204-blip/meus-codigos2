#include <stdio.h>
int main()
{
    int num, min, max;
    int distMin, distMax;

    printf("Digite o valor: ");
    scanf("%d", &num);
    printf("Digite o limite inferior: ");
    scanf("%d", &min);
    printf("Digite o limite superior: ");
    scanf("%d", &max);

    distMin = num - min;
    distMax = max - num;

    if (distMin < distMax){
        printf("Mais proximo do limite inferior.\n");
    }
    else if (distMax < distMin){
        printf("Mais proximo do limite superior.\n");
    }
    else{
        printf("Mesma distancia dos dois limites.\n");
    }

    return 0;

}