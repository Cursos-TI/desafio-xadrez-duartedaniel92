#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1, rainha = 1, cavalo = 1;

    printf("Desafio de Xadrez - MateCheck!\n");
    printf("\n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação Bispo\n");
    printf("\n");
    while (bispo <= 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação Torre\n");
    printf("\n");
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação Rainha\n");
    printf("\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação Cavalo\n");
    printf("\n");
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    printf("\n");
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
