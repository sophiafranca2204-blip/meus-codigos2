#include <stdio.h>
int main()
{
    float a, b;

    printf("Digite dois numeros: ");
    scanf("%f%f", &a, &b);

    if((a * 10 == (int)(a * 10)) && (b * 10 == (int)(b * 10))){
        printf("Tem o mesmo numero de casas decimais.\n");
    }
    else{
        printf("Nao tem o msm numero d casas decimais.\n");
    }

    return 0;
}