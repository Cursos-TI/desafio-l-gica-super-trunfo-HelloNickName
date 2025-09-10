#include <stdio.h>
#include <string.h> // Necessário para strcpy

int main() {
    // Declaração das variáveis da primeira carta
    char codigo1[4];
    char nomeCidade1[50];
    char estado1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    unsigned long int populacao1;

    // Declaração das variáveis da segunda carta
    char codigo2[4];
    char nomeCidade2[50];
    char estado2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    unsigned long int populacao2;

    // Variáveis adicionais para atributos derivados
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;

    // Título inicial
    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    // Entrada de dados da primeira carta
    printf("Digite a letra do estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a população da cidade da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada de dados da segunda carta
    printf("Digite a letra do estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos de atributos derivados
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição do resumo das cartas cadastradas
    printf("\n=== Resumo das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Menu para escolha de atributos para comparação
    int attr1, attr2;
    printf("\nEscolha dois atributos para comparar (o segundo será o critério de desempate):\n");
    printf("1-População\n2-Área\n3-PIB\n4-Pontos Turísticos\n5-Densidade Populacional (menor vence)\n6-PIB per Capita\n7-Super Poder\n");
    printf("Primeiro atributo: ");
    scanf("%d", &attr1);
    printf("Segundo atributo (desempate): ");
    scanf("%d", &attr2);

    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    char nomeAttr1[30], nomeAttr2[30];

    // Atribuindo valores do primeiro atributo
    switch(attr1){
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; strcpy(nomeAttr1, "População"); break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; strcpy(nomeAttr1, "Área"); break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; strcpy(nomeAttr1, "PIB"); break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; strcpy(nomeAttr1, "Pontos Turísticos"); break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; strcpy(nomeAttr1, "Densidade Populacional"); break;
        case 6: valor1_attr1 = pibPerCapita1; valor2_attr1 = pibPerCapita2; strcpy(nomeAttr1, "PIB per Capita"); break;
        case 7: valor1_attr1 = superPoder1; valor2_attr1 = superPoder2; strcpy(nomeAttr1, "Super Poder"); break;
    }

    // Atribuindo valores do segundo atributo
    switch(attr2){
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; strcpy(nomeAttr2, "População"); break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; strcpy(nomeAttr2, "Área"); break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; strcpy(nomeAttr2, "PIB"); break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; strcpy(nomeAttr2, "Pontos Turísticos"); break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; strcpy(nomeAttr2, "Densidade Populacional"); break;
        case 6: valor1_attr2 = pibPerCapita1; valor2_attr2 = pibPerCapita2; strcpy(nomeAttr2, "PIB per Capita"); break;
        case 7: valor1_attr2 = superPoder1; valor2_attr2 = superPoder2; strcpy(nomeAttr2, "Super Poder"); break;
    }

    // Comparação do primeiro atributo
    int resultado = 0; // 0 = empate, 1 = carta1, 2 = carta2
    if(attr1 == 5){
        if(valor1_attr1 < valor2_attr1) resultado = 1;
        else if(valor1_attr1 > valor2_attr1) resultado = 2;
    } else {
        if(valor1_attr1 > valor2_attr1) resultado = 1;
        else if(valor1_attr1 < valor2_attr1) resultado = 2;
    }

    // Desempate com o segundo atributo
    if(resultado == 0){
        printf("Houve empate em '%s'. Desempatando com '%s'...\n", nomeAttr1, nomeAttr2);
        if(attr2 == 5){
            if(valor1_attr2 < valor2_attr2) resultado = 1;
            else if(valor1_attr2 > valor2_attr2) resultado = 2;
        } else {
            if(valor1_attr2 > valor2_attr2) resultado = 1;
            else if(valor1_attr2 < valor2_attr2) resultado = 2;
        }
    }

    // Resultado final
    printf("\n--- Veredito Final ---\n");
    if(resultado == 1) printf("A CARTA 1 (%s) VENCEU!\n", nomeCidade1);
    else if(resultado == 2) printf("A CARTA 2 (%s) VENCEU!\n", nomeCidade2);
    else printf("EMPATE TOTAL! As duas cartas são equivalentes nos critérios escolhidos.\n");

    return 0;
}
