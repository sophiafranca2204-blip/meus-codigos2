#include <stdio.h>
int main()
{
    int num1, num2;
    
    printf ("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf ("Digite o segundo numero:\n");
    scanf("%d", &num2);

    if (num1 % num2 == 0){
        printf ("%d eh multiplo de %d\n", num1, num2);
    }
    else {
        printf ("%d nao eh multiplo de %d\n", num1, num2);
    }

    return 0;

}