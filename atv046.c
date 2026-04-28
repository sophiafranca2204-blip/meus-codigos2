#include <stdio.h>
int main()
{
    float salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario < 1500){
        printf("Funcionario classificado como: Baixa renda.\n");
    }
    else if ((salario >= 1500) && (salario <= 5000)){
        printf("Funcionario classificado como: Renda media.\n");
    }
    else{
        printf("Funcionario classificado como: Alta renda.\n");
    }

    return 0;
}