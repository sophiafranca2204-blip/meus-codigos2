#include <stdio.h> 
int main()
{
    int num;

    printf("Digite um numero de 1 a 7(1 a 5: segunda a sexta/ 6 e 7: sabado e domingo respectivamente): ");
    scanf("%d", &num);

    if((num >= 1) && (num <= 5)){
        printf("Dia util.\n");
    }
    else if ((num == 6) || (num == 7)){
        printf("Final de semana.\n");
    }
    else{
        printf("Numero invalido!\n");
    }

    return 0;
}