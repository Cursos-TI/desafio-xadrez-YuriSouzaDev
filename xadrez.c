#include <stdio.h>

void moverBispo(int passo, int max) {
    if (passo > max) return;
    char coluna = 'B' + (passo - 1);
    printf("Bispo se movimentando para casa %c%d (Diagonal Superior Direita)\n", coluna, passo);
    moverBispo(passo + 1, max);
}


void moverTorre(int passo, int max) {
    if (passo > max) return;
    printf("Torre se movimentando para a Direita - Casa B%d\n", passo);
    moverTorre(passo + 1, max);
}


void moverRainha(int passo, int max) {
    if (passo > max) return;
    char coluna = 'H' - (passo - 1); // Colunas da direita para a esquerda
    printf("Rainha se movimentando para casa %c1 (Esquerda)\n", coluna);
    moverRainha(passo + 1, max);
}

int main() {
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    char peca;

    printf("Qual peça você quer movimentar? (B para Bispo, T para Torre, R para Rainha, C para Cavalo)\n");
    scanf(" %c", &peca);


    if (peca == 'T' || peca == 't') {
        moverTorre(1, movimentoTorre);
    }
    else if (peca == 'B' || peca == 'b') {
        moverBispo(1, movimentoBispo);
    }
    else if (peca == 'R' || peca == 'r') {
        moverRainha(1, movimentoRainha);
    }

    else if (peca == 'C' || peca == 'c') {
        printf("Movimentação do Cavalo (em L para cima e direita):\n");


        for (int linha = 4; linha >= 1; linha--) { 
            for (int coluna = 4; coluna <= 8; coluna++) { 
                if (linha == 4 && coluna == 4) continue; 
                if ((linha == 2 && coluna == 5) || (linha == 3 && coluna == 6)) {
                    printf("Cavalo se movimentando para casa %c%d (L para Cima e Direita)\n", 'A' + coluna - 1, linha);
                    break; 
                }
            }
        }
    }
    else {
        printf("Peça inválida! Escolha B, T, R ou C.\n");
    }

    return 0;
}
