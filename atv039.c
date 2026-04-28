#include <stdio.h> 
int main()
{
    int a, b, c;

    printf ("Digite os tres angulos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180){
        printf("Forma um angulo de 180 graus.\n");
    }
    else{
        printf("Os angulos nao formam um angulo de 180 graus.\n");
    }

    return 0;
}  