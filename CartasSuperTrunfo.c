#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a segunda carta
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    printf("=== SISTEMA SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    // Cadastro da primeira carta
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área  (em km): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Cadastro da segunda carta
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Primeira carta
    printf("--- PRIMEIRA CARTA ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    
    printf("\n");
    
    // Segunda carta
    printf("--- SEGUNDA CARTA ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}
