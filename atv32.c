#include <stdio.h>
int main()
{
    float consumo; 

    printf("Digite o consumo de energia(kWh): ");
    scanf("%f", &consumo);

    if(consumo < 100 ){
        printf("Consumo baixo.\n");
    }
    else if((consumo >= 100) && (consumo < 500)){
        printf("Consumo medio.\n");
    }
    else{
        printf("Consumo alto\n");
    }

    return 0;

}