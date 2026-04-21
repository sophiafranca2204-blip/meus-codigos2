#include <stdio.h>
int main()
{
    int nivel;

    printf("Digite o nivel de agua do reservatorio: ");
    scanf("%d", &nivel);

    if ((nivel >= 0) && (nivel <= 30)){
        printf("Nivel classificado como: vazio!\n");
    }
    else if ((nivel >= 31) && (nivel <= 70)){
        printf("Nivel classificado como: medio!\n ");
    }
    else if((nivel >= 71) && (nivel <= 100)){
        printf("Nivl classificado como: cheio!\n");
    }
    else{
        printf("Valor invalido!\n");
    }

    return 0;
}