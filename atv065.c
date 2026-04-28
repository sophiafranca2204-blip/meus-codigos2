#include <stdio.h>
int main()
{
    
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    
    if (n == 1){
         printf("Raiz: 1.00\n");
    }
    else if (n == 2) {
        printf("Raiz: ~1.41\n");
    }
    else if (n == 3){
        printf("Raiz: ~1.73\n");
    }
    else if (n == 4){
        printf("Raiz: 2.00\n");
    }
    else if (n <= 8){
        printf("Raiz: ~2.xx\n");
    }
    else if (n == 9){
         printf("Raiz: 3.00\n");
    }
    else if (n <= 15) {
        printf("Raiz: ~3.xx\n");
    }
    else if (n == 16){
        printf("Raiz: 4.00\n");
    }
    else if (n <= 24) {
        printf("Raiz: ~4.xx\n");
    }
    else if (n == 25) {
        printf("Raiz: 5.00\n");
    }
    else if (n <= 35) {
        printf("Raiz: ~5.xx\n");
    }
    else if (n == 36){
        printf("Raiz: 6.00\n");
    }
    else if (n <= 48) {
        printf("Raiz: ~6.xx\n");
    }
    else if (n == 49){
        printf("Raiz: 7.00\n");
    }
    else if (n <= 63) {
        printf("Raiz: ~7.xx\n");
    }
    else if (n == 64){
        printf("Raiz: 8.00\n");
    }
    else if (n <= 80) {
        printf("Raiz: ~8.xx\n");
    }
    else if (n == 81) {
        printf("Raiz: 9.00\n");
    }
    else if (n <= 99){
        printf("Raiz: ~9.xx\n");
    }
    else if (n == 100) {
        printf("Raiz: 10.00\n");
    }
    else {
        printf("Numero fora do intervalo (1 a 100)\n");
    }
    
    if (n == 1 || n == 4 || n == 9 || n == 16 || n == 25 || n == 36 || n == 49 || n == 64 || n == 81 || n == 100) {
        printf("Classificacao: Facil\n");
    } else if (n <= 100) {
        printf("Classificacao: Media\n");
    } else {
        printf("Classificacao: Dificil\n");
    }

    return 0;

}