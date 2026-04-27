#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((b - a) == (c - b)){
        printf("Formou uma progressao arimetica.\n");
    }
    else{
         printf("nao formou uma progressao arimetica.\n");
    }
}