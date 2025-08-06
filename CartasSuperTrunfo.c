#include <stdio.h>

int main() {
    // Dados da Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Dados da Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Entrada para Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada para Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.10f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.10f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super Poder: %d\n", super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}
