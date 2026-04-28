#include <stdio.h>
int main()
{
    float num1, num2;
    float media;

    printf("Digite dois numeros: ");
    scanf("%f%f", &num1, &num2);

    media = (num1 + num2) / 2;

    if(media - num1 == num2 - media){
        printf("A media esta igualmente distant dos dois numeros.\n");
    }
    else if((media - num1) < (num2 - media) ){
        printf("A media esta mais proxima do primeiro numero.\n");
    }
    else{
        printf("A media esta mais proxima do segundo numero.\n");
    }
}