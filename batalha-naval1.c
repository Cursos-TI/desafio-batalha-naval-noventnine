#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0; // Inicializa com água
        }
    }
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char orientacao) {
    if (orientacao == 'H') { // Horizontal
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha][coluna + i] = 3;
        }
    } else if (orientacao == 'V') { // Vertical
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha + i][coluna] = 3;
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    inicializarTabuleiro(tabuleiro);

    // Posicionando os navios
    posicionarNavio(tabuleiro, 2, 3, 'H'); // Navio horizontal
    posicionarNavio(tabuleiro, 5, 7, 'V'); // Navio vertical

    // Exibindo o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}