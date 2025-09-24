#include <stdio.h>

printf("Desafio de Xadrez - MateCheck- nivel Novato movimentação das peças\n");

int main() {

    printf("---Movimento do Bispo (2 casas na diagonal)---\n");
    int casas_bispo = 1;
    do{
        printf("Cima, Direita: %d\n", casas_bispo);
        casas_bispo++;
    }while(casa_bispo <2);

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
        casa_rainha++;
    }


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
