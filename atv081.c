#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if((n1 == 2 * n2) || (n2 == 2 * n1)){
        printf("Um e o dobro do outro.\n");
    }
    else{
        printf("Nao sao o dobro um do outro.\n");
    }

    return 0;

}