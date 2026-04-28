#include <stdio.h>
int main()
{
    int ini, fim, duracao;

    printf("Digite a hora inicial(0 a 23): ");
    scanf("%d", &ini);
    printf("Digite a hora final(0 a 23): ");
    scanf("%d", &fim);

    if(fim>= ini){
        duracao = fim - ini;
    }
    else{
        duracao = (24 - ini) + fim;
    }

    printf("Duracao: %d horas\n", duracao);

    if(duracao <= 2){
        printf("tempo curto.\n");
    }
    else if(duracao <= 5){
        printf("tempo medio.\n");
    }
    else{
        printf("Tmpo longo.\n");
    }

    return 0;
}