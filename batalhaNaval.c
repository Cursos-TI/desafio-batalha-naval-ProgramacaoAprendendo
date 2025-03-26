#include <stdio.h>

#define linhas 10
#define colunas 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int navio1[3][4], navio2[1][2], navio3[1][9-1], navio4[7][9-7];
    int tabuleiro[linhas][colunas];
    int soma;
    
    printf("JOGO DE BATALHA NAVAL.\n");
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tabuleiro[i][j] = soma;
            soma++;
            printf("0 ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("Navio 1 está em (%d, %d)\n", tabuleiro[3][4]);
    printf("Navio 2 está em (%d, %d)\n", tabuleiro[5][9]);
    printf("Navio 3 está em (%d, %d)\n", tabuleiro[9][9-1]);
    printf("Navio 4 está em (%d, %d)\n", tabuleiro[3][9-3]);


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
