#include <stdio.h>

int main() {
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    char peca;

    printf("Qual peça você quer movimentar? (B para Bispo, T para Torre, R para Rainha, C para Cavalo)\n");
    scanf(" %c", &peca);
    
    if (peca == 'T' || peca == 't') {
        int i = 1;
        while (i <= movimentoTorre) {
            printf("Torre se movimentando para a Direita - Casa B%d\n", i);
            i++;
        }
    }

    else if (peca == 'B' || peca == 'b') {
        int i = 1;
        while (i <= movimentoBispo) {
            char coluna = 'B' + (i - 1);
            printf("Bispo se movimentando para casa %c%d (Diagonal Superior Direita)\n", coluna, i);
            i++;
        }
    }
    
    else if (peca == 'R' || peca == 'r') {
        int i = 1;
        while (i <= movimentoRainha) {
            printf("Rainha se movimentando para a Esquerda - Casa %d\n", i);
            i++;
        }
    }

    else if (peca == 'C' || peca == 'c') {
        printf("Movimentação do Cavalo (em L para baixo e esquerda):\n");

        for (int i = 0; i < 1; i++) {
            int movimentos = 2;
            int j = 0;

            while (j < movimentos) {
                if (j == 0) {
                    printf("Cavalo se movimentando: 2 para Baixo, 1 para Esquerda\n");
                } else {
                    printf("Cavalo se movimentando: 1 para Baixo, 2 para Esquerda\n");
                }
                j++;
            }
        }
    }
    else {
        printf("Peça inválida! Escolha B, T, R ou C.\n");
    }

    return 0;
}
