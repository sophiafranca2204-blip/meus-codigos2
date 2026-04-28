#include <stdio.h>
int main()
{
    float a, b;

    printf("digite dois valores: ");
    scanf("%f%f", &a, &b);

    if ((a > 0) && (b > 0)){
        printf("Os dois valores tem sinais iguais(positivos).\n");
    }
    else if((a < 0) && (b < 0)){
        printf("Os dois valores tem sinais iguais(negativos).\n");
    }
    else if ((a == 0 ) || (b == 0)){
        printf("Um dos valores e zero(elemento neutro)\n");
    }
    else{
        printf("Os valores tem sinais diferentes\n");
    }

    return 0;

}
