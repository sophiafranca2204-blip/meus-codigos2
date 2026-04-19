#include <stdio.h>
int main()
{
    int num;
    printf ("Digite um numero:\n");
    scanf("%d", &num);

    if (num < 1){
        printf("Numero invalido!\n");
    }
    else if ((num >= 1 ) && (num <= 100)){
        printf ("Numero entre 1 e 100");
    }
    else if ((num >= 101) && (num <= 200)){
        printf("Numero entre 101 e 200.\n");
    }
    else {
        printf("Numero maior que 200.\n");
    }
    
    return 0;

}