#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapita1;
    
    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;
    
    printf("=== SISTEMA SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    // Cadastro da primeira carta
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n");
    printf("Digite o estado (Letra A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (ex: Fortaleza): ");
    scanf(" %49[^\n]", nome_cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área  (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Cadastro da segunda carta
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n");
    printf("Digite o estado (Letra A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (ex: Manaus): ");
    scanf(" %49[^\n]", nome_cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");

    //Calcular densidade populacional e PIB percapita
    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1 * 1000000000 / populacao1; // Converte PIB de Bilhões para reais antes de dividir 
    
    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2 * 1000000000 / populacao2; // Converte PIB de Bilhões para reais antes de dividir
    
    // Exibição dos dados cadastrados
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    
    printf("\n");
    
    // Segunda carta
    printf("--- SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    
    return 0;
}
