#include <stdio.h>

int main() {
    // Cada cidade terá um código (ex: A01), população, área, PIB e número de pontos turísticos
    char codigo[4]; // Exemplo: "A01" -> 3 caracteres + '\0' = 4
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Super Trunfo - Países (Nível Novato) ===\n\n");

    // Pede ao usuário o código da carta
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    // Pede o valor da população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    // Pede o valor da área
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    // Pede o valor do PIB
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    // Pede o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibe as informações cadastradas
    printf("\n=== Dados da Carta ===\n");
    printf("Código da Carta: %s\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nCadastro concluído com sucesso!\n");
}

