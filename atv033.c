#include <stdio.h> 
int main()
{
    float temp;

    printf("Digite uma temperatura: ");
    scanf("%f", &temp);

    if(temp < 15){
        printf("A temperatura %f e fria.\n", temp);
    }
    else if ((temp > 15) && (temp < 25)){
        printf ("A temperatura %f e agradavel.\n", temp);
    }
    else{
        printf("A temperatura %f e quente.\n", temp);
    }

    return 0;

}