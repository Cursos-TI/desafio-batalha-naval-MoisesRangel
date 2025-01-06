#include <stdio.h>

#define LINHA 10
#define COLUNA 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[5][5] = {
        {0,0,0,3,0},
        {0,0,0,3,0},
        {0,0,0,3,0},
        {0,0,0,0,0},
        {0,3,3,3,0}
    };

    printf("Parte do navio posicionado na casa %d\n",tabuleiro[0][3]);
    printf("Parte do navio posicionado na casa %d\n",tabuleiro[1][3]);
    printf("Parte do navio posicionado na casa %d\n",tabuleiro[2][3]);

    printf("Parte do navio posicionado na casa %d\n",tabuleiro[4][1]);
    printf("Parte do navio posicionado na casa %d\n",tabuleiro[4][2]);
    printf("Parte do navio posicionado na casa %d\n\n\n",tabuleiro[4][3]);
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    int matriz[LINHA][COLUNA];
    int indice = 0;
    //loop de referência de indices das colunas
    for(int x = 0; x < 10; x++){
            printf("  %d",x);
        }
    printf("\n");
    for(int i = 0; i < LINHA; i++){
        printf("%d ",i); //referencia de indice nas linhas
        
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = indice;
            if(i > 3 && i < 8 && j > 5 && j < 7){
                matriz[i][j] = 3;
            }
            if(i > 3 && i < 9 && j > 2 && j < 4){
                matriz[i][j] = 3;
            }
            if(i > 8 && i < 10 && j > 2 && j < 7){
                matriz[i][j] = 3;
            }
            if(i > 1 && i < 3 && j > 2 && j < 7){
                matriz[i][j] = 3;
            }
            
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
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
