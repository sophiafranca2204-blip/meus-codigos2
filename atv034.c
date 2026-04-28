#include <stdio.h>
int main()
{
    int km;

    printf("Digite a quilometragem do carro: ");
    scanf("%d", &km);

    if (km <= 10000){
        printf("Seu carro nao precisa de manutencao.\n");
    }
    else{
        printf("Seu carro precisa de manutencao.\n");
    }

    return 0;
}