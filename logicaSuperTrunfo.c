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
int opcao; // Declara a variável como um número inteiro

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("Opcao: ");
    scanf("%d", &opcao); // Lê o número digitado pelo usuário e guarda em opcao
    
    
    // --- LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE ---
    switch (opcao) {
        case 1: // População (Maior vence)
            printf("Atributo: População\n");
            printf("%s: %lu | %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área (Maior vence)
            printf("Atributo: Área\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB (Maior vence)
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões | %s: R$ %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos (Maior vence)
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", cidade1, pontos1, cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (MENOR vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
            // Lógica Invertida:
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente escolhendo de 1 a 5.\n");
    }

    printf("\n-------------------------------\n");
    return 0;
}