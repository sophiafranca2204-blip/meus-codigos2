#include <stdio.h> 
int main()
{
    float distancia, tempo, velocidade;

    printf("Digite a distancia (km): ");
    scanf("%f", &distancia);
    printf("Digite o tempo (h): ");
    scanf("%f", &tempo);
    
    velocidade = distancia / tempo;

    printf("Velocidade media: %.2f km/h\n", velocidade);

    if (velocidade > 80){
        printf("Condutor acima da media\n");
    }
    else{
        printf("Condutor dentro da media\n");
    }

    return 0;
    

}