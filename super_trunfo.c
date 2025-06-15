#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê até a quebra de linha

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Entrada Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparações ---\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("Pontos Turísticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB per Capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("Densidade Populacional (menor vence): %s\n", (densidade1 < densidade2) ? "Carta 1 vence" : "Carta 2 vence");
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 vence" : "Carta 2 vence");

    return 0;
}
