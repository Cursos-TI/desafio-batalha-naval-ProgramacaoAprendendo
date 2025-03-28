#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidadeCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                tabuleiro[x + i - 2][y + j - 2] = 1;
            }
        }
    }
}

void aplicarHabilidadeCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                tabuleiro[x + i - 2][y + j - 2] = 1;
            }
        }
    }
}

void aplicarHabilidadeOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                tabuleiro[x + i - 2][y + j - 2] = 1;
            }
        }
    }
}

int main() {
    
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    printf("Posicionando navios...\n");

    
    for (int i = 2; i <= 4; i++) {
        tabuleiro[2][i] = 3;
        printf("Navio horizontal - Coordenada: (%d, %d)\n", 2, i);
    }

    // Exemplo de navios diagonais
    for (int i = 5; i <= 7; i++) {
        tabuleiro[i][i - 3] = 3;
        printf("Navio diagonal - Coordenada: (%d, %d)\n", i, i - 3);
    }

    printf("\nTabuleiro com navios posicionados:\n");
    imprimirTabuleiro(tabuleiro);

    printf("\nAplicando habilidades especiais...\n");

    aplicarHabilidadeCone(tabuleiro, 4, 4);

    aplicarHabilidadeCruz(tabuleiro, 6, 6);

    aplicarHabilidadeOctaedro(tabuleiro, 7, 3);

    printf("\nTabuleiro Final com habilidades aplicadas:\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}
