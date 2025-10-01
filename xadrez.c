#include <stdio.h>

#define NUM_CASAS_MOVER 4 

void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casasRestantes - 1); 
}

void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverRainhaRecursivo(casasRestantes - 1);
}

void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Esquerda\n");
    moverBispoRecursivo(casasRestantes - 1);
}

void moverCavaloComplexo() {
    int i; 
    int passos_verticais = 2;
    int passos_horizontais = 1;

    for (i = 1; i <= passos_verticais; i++) {
        printf("Cima\n");

        if (i < passos_verticais) {
            continue; 
        }

        int j; 
        for (j = 1; j <= passos_horizontais; j++) {
            printf("Direita\n");
            
            if (j == passos_horizontais) {
                break; 
            }
        }
        
        if (i == passos_verticais) {
            break; 
        }
    }
}

void moverBispoAninhado() {
    int i; 
    int max_movimentos = NUM_CASAS_MOVER;

    for (i = 1; i <= max_movimentos; i++) {
        printf("Baixo\n");

        int j;
        for (j = 1; j <= 1; j++) {
            printf("Esquerda\n");
        }
    }
}

int main() {
    printf("--- SIMULACAO DE MOVIMENTOS DE PEÇAS DE XADREZ (AVANÇADO) ---\n\n");
    
    // TORRE com RECURSIVIDADE
    printf("--- Movimento da TORRE (Recursivo - %d casas Direita) ---\n", NUM_CASAS_MOVER);
    moverTorreRecursivo(NUM_CASAS_MOVER);
    printf("\n");

    // BISPO com RECURSIVIDADE
    printf("--- Movimento do BISPO (Recursivo - %d casas Diagonal Cima/Esquerda) ---\n", NUM_CASAS_MOVER);
    moverBispoRecursivo(NUM_CASAS_MOVER);
    printf("\n");
    
    // RAINHA com RECURSIVIDADE
    printf("--- Movimento da RAINHA (Recursivo - %d casas Diagonal Cima/Direita) ---\n", NUM_CASAS_MOVER);
    moverRainhaRecursivo(NUM_CASAS_MOVER);
    printf("\n");

    // CAVALO com LOOPS COMPLEXOS
    printf("--- Movimento do CAVALO (Loops Complexos - 2 Cima, 1 Direita) ---\n");
    moverCavaloComplexo();
    printf("\n");

    // BISPO com LOOPS ANINHADOS
    printf("--- Movimento do BISPO (Loops Aninhados - %d casas Diagonal Baixo/Esquerda) ---\n", NUM_CASAS_MOVER);
    moverBispoAninhado();
    printf("\n");

    return 0;
}