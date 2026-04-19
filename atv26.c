#include <stdio.h> 
int main()
{
    float salario, salarioM;
    
    printf("Digite o salario: ");
    scanf("%f", &salario);

    salarioM = 1412.00;

    if (salario > salarioM){
        printf("O salario %2.f e maior que o salario minimo(%2.f).\n", salario, salarioM);
    }
    else if (salario == salarioM){
        printf("O salario %2.f e igual ao salario minimo(%2.f).\n", salario, salarioM);
    }
    else {
        printf("O salario %2.f e menor que o salario minimo(%2.f).\n", salario, salarioM);
    }

    return 0;
}