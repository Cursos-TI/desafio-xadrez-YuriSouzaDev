#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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

// Definição dos movimentos máximos de cada peça
const int movimentoBispo = 5;
const int movimentoTorre = 5;
const int movimentoRainha = 8;
char peca;

printf("Qual peça você quer movimentar? (B para Bispo, T para Torre, R para Rainha)\n");
scanf(" %c", &peca);

// Movimentação da Torre: 5 casas para a direita
if (peca == 'T' || peca == 't') {
    int i = 1;
    while (i <= movimentoTorre) {
        printf("Torre se movimentando para a Direita - Casa B%d\n", i);
        i++;
    }
} 
// Movimentação do Bispo: 5 casas na diagonal superior direita
else if (peca == 'B' || peca == 'b') {
    int i = 1;
    while (i <= movimentoBispo) {
        char coluna = 'B' + (i - 1); // Ajusta a coluna da casa na diagonal
        printf("Bispo se movimentando para casa %c%d (Diagonal Superior Direita)\n", coluna, i);
        i++;
    }
} 
// Movimentação da Rainha: 8 casas para a esquerda
else if (peca == 'R' || peca == 'r') {
    int i = 1;
    while (i <= movimentoRainha) {
        printf("Rainha se movimentando para a Esquerda - Casa %d\n", i);
        i++;
    }
} 
else {
    printf("Peça inválida! Escolha B, T ou R.\n");
}

return 0;
}
