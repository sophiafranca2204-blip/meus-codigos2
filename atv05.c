#include <stdio.h>
int main()

{
    int num;
    printf("Digite um numero:\n");
    scanf("%d",&num);

    if ((num > 20) || (num < 10)) {
        printf ("Numero invalido.");
    }
    else {
        printf ("numero valido!");
    }

    return 0;
}
