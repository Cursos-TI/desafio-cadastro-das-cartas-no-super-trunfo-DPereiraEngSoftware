#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // Cadastro da Carta 1
    printf("Digite o estado da carta 1 (ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a cidade da carta 1 (ex: 1): ");
    scanf(" %c", &cidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando atributos adicionais da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\nDigite o estado da carta 2 (ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a cidade da carta 2 (ex: 2): ");
    scanf(" %c", &cidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando atributos adicionais da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %c\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);  
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %c\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}