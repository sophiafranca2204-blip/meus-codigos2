#include <stdio.h> 
int main()
{
    int num1, num2;
    printf ("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf ("Digite o segundo numero:\n");
    scanf("%d", &num2);

    if (num1 + num2 > 100){
        printf("A soma (%d) eh maior que 100.\n", num1 + num2);
    }
    else {
        printf("A soma (%d) nao eh maior que 100.\n", num1 + num2);
    }

    return 0;

}