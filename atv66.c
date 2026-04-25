#include <stdio.h>
int main()
{
    float a, b, result;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
    scanf("%d", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if(op == 1){
        result = a + b;
    }
    else if(op == 2){
        result = a - b;
    }
    else if(op == 3){
        result = a * b;
    }
    else if(op == 4){
        if(b != 0){
            result = a /b;
        }
        else{
            printf("Erro: Divisao por zero.\n");
        }
    }
    else{
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Resultado: %.2f\n", result);

    if(result > a){
        printf("O resultado e MAIOR que o operador inicial.\n");
    }
    else{
        printf("O resultado NAO e maior que o operador inicial.\n");
    }

    return 0;

}