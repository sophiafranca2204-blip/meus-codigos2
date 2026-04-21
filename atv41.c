#include <stdio.h>
int main()
{
    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if ((nota > 0) && (nota < 10)){
        if (nota < 4){
            printf("Sua nota foi classificada como: Ruim!\n");
        }
        else if((nota >= 4) && (nota < 6)){
            printf("Sua nota foi classificada como: Media!\n");
        }
        else if ((nota >= 6) && (nota < 8)){
            printf("Sua nota foi classificada como: Boa!\n");
        }
        else{
            printf("Sua nota foi classificada como: Excelente!\n");
        }
    }
    else{
        printf("Nota invalida!");
    }

    return 0;
       

}