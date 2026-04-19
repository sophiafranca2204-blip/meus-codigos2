#include <stdio.h> 
int main()
{
    int tempo;

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempo);

    if (tempo >= 35){
        printf("Voce ja pode se aposentar!\n");
    }
    else {
        printf("Voce ainda nao pode se aposentar.");
    }

    return 0;
}