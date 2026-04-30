#include <stdio.h>

/**
 * Desafio Super Trunfo - Nível Básico
 * Objetivo: Comparar duas cartas baseando-se em um atributo.
 */

int main() {
    // --- CADASTRO DA CARTA 1 ---
    char estado1 = 'B';
    char codigo1[] = "B01";
    char cidade1[] = "Salvador";
    unsigned long int populacao1 = 2418005;
    float area1 = 692.81;
    float pib1 = 63.90; 
    int pontos1 = 35;

    // --- CADASTRO DA CARTA 2 ---
    char estado2 = 'C';
    char codigo2[] = "C01";
    char cidade2[] = "Fortaleza";
    unsigned long int populacao2 = 2428678;
    float area2 = 312.35;
    float pib2 = 67.40; 
    int pontos2 = 28;

    // --- CÁLCULOS DOS ATRIBUTOS DERIVADOS ---
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    
    // Convertendo PIB de bilhões para reais para precisão no PIB per Capita
    double pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    double pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // --- LÓGICA DE COMPARAÇÃO ---
    // Atributo escolhido para este exemplo: População
    
    printf("### COMPARAÇÃO DE CARTAS (Atributo: População) ###\n\n");
    printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);
    printf("--------------------------------------------------\n");

    // No Super Trunfo, para população, ganha quem tem o MAIOR valor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    
    return 0;
}