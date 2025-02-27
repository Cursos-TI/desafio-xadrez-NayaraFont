#include <stdio.h>

int main() {
    
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); 
    }

    
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 1;
    while (casasBispo <= 5) {
        printf("Cima, Direita\n"); 
        casasBispo++;
    }


    printf("\nMovimento da Rainha:\n");
    int casasRainha = 1;
    do {
        printf("Esquerda\n"); 
        casasRainha++;
    } while (casasRainha <= 8);

    return 0;
}
