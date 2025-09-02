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

    return 0;
}
#include <stdio.h>

int main() {
    // Número de casas que cada peça deve se mover
        int movimentoTorre = 5;
            int movimentoBispo = 5;
                int movimentoRainha = 8;

                    // ===============================
                        // Movimento da TORRE (for loop)
                            // ===============================
                                printf("Movimento da Torre:\n");
                                    // Torre se move 5 casas para a direita
                                        for (int i = 0; i < movimentoTorre; i++) {
                                                printf("Direita\n");
                                                    }

                                                        // ===============================
                                                            // Movimento do BISPO (while loop)
                                                                // ===============================
                                                                    printf("\nMovimento do Bispo:\n");
                                                                        // Bispo se move 5 casas na diagonal "Cima Direita"
                                                                            int i = 0;
                                                                                while (i < movimentoBispo) {
                                                                                        printf("Cima Direita\n");
                                                                                                i++;
                                                                                                    }

                                                                                                        // ===============================
                                                                                                            // Movimento da RAINHA (do-while loop)
                                                                                                                // ===============================
                                                                                                                    printf("\nMovimento da Rainha:\n");
                                                                                                                        // Rainha se move 8 casas para a esquerda
                                                                                                                            int j = 0;
                                                                                                                                do {
                                                                                                                                        printf("Esquerda\n");
                                                                                                                                                j++;
                                                                                                                                                    } while (j < movimentoRainha);

                                                                                                                                                        return 0;
                                                                                                                                                        }