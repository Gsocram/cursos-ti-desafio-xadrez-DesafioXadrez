#include <stdio.h>

int main() {

printf("Desafio de Xadrez Novato movimentação das peças\n");

    printf("---Movimento do Bispo (2 casas na diagonal)---\n");
    int casas_bispo = 1;
    do{
        printf("Cima, Direita: %d\n", casas_bispo);
        casas_bispo++;
    }while(casas_bispo <2);

    printf("\n");

    printf("--- Movimento da Torre (5 casas para a direita)---\n");
    for(int i = 1; i <= 5; i++){
        printf("Direita: %d\n", i);
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda)---\n");
    int casas_rainha = 1;
    while (casas_rainha <= 8){
        printf("Esquerda: %d\n", casas_rainha);
        casas_rainha++;
    }
    printf("\n");
    #include <stdio.h>

int main() {

printf("Desafio de Xadrez Novato movimentação das peças\n");

    printf("---Movimento do Bispo (2 casas na diagonal)---\n");
    int casas_bispo = 1;
    do{
        printf("Cima, Direita: %d\n", casas_bispo);
        casas_bispo++;
    }while(casas_bispo <2);

    printf("\n");

    printf("--- Movimento da Torre (5 casas para a direita)---\n");
    for(int i = 1; i <= 5; i++){
        printf("Direita: %d\n", i);
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda)---\n");
    int casas_rainha = 1;
    while (casas_rainha <= 8){
        printf("Esquerda: %d\n", casas_rainha);
        casas_rainha++;
    }
    printf("\n");
    #include <stdio.h>

int main() {

printf("Desafio de Xadrez Novato movimentação das peças\n");

    printf("---Movimento do Bispo (2 casas na diagonal)---\n");
    int casas_bispo = 1;
    do{
        printf("Cima, Direita: %d\n", casas_bispo);
        casas_bispo++;
    }while(casas_bispo <2);

    printf("\n");

    printf("--- Movimento da Torre (5 casas para a direita)---\n");
    for(int i = 1; i <= 5; i++){
        printf("Direita: %d\n", i);
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda)---\n");
    int casas_rainha = 1;
    while (casas_rainha <= 8){
        printf("Esquerda: %d\n", casas_rainha);
        casas_rainha++;
    }
    printf("\n");
    printf("--- Movimento do Cavalo (Duas para baixo e uma para a esquerda) ---\n");

    printf("Fase 1 (Vertical) - Duas casas para baixo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Baixo: %d\n", i);
        if (i == 2) {
            printf("  (Fim da fase vertical, iniciando a fase horizontal)\n");
            int j = 1;
        
            while (j <= 1) {
                printf("Esquerda: %d (Completa o L)\n", j);
                j++;
            }
        }
    }
    printf("\n");





    return 0;
}
