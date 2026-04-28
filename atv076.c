#include <stdio.h>
int main()
{
    float lado1, lado2, lado3;
    float perimetro;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("O perimetro e de: %.2f\n", perimetro);
    
    if(perimetro <= 10){
        printf("Pequeno.\n");
    }
    else if(perimetro <= 20){
        printf("Medio.\n");
    }
    else{
        printf("Grande.\n");
    }

    return 0;
}