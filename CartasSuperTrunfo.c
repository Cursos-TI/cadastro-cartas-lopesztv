#include <stdio.h>

int main() {
    // Cada cidade terá um código (ex: A01), população, área, PIB e número de pontos turísticos
    char codigo1[4]; // Exemplo: "A01" -> 3 caracteres + '\0' = 4
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

        // ---------- Variáveis da Carta 2 ----------
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    printf("=== Super Trunfo - Países (Nível Novato) ===\n");

    // Pede ao usuário o código da carta
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    // Pede o valor da população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    // Pede o valor da área
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    // Pede o valor do PIB
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    // Pede o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    //calcular dencidade populacional
   densidade1 = (float)(populacao1) / area1;
   pibpercapita1 = (float)(pib1) / populacao1;

    printf("A densidade populacional por km2 é: %.1f\n", densidade1 );
    printf("O PIB per Capita da cidade será de: %.3f\n", pibpercapita1);


    // Exibe as informações cadastradas
    printf("\n=== Dados da Carta ===\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
 

        // ---------- Carta 2 ----------
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da Carta: ");
    scanf("%3s", codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

        //calcular dencidade populacional carta2
   densidade2 = (float)(populacao2) / area2;
   pibpercapita2 = (float)(pib2) / populacao2;

    printf("A densidade populacional por km2 é: %.1f\n", densidade2 );
    printf("O PIB per Capita da cidade será de: %.3f\n", pibpercapita2);

 

    // ---------- Exibe as cartas ----------
    printf("=== Dados das Cartas ===\n");

    printf("Carta 1: %s\n", codigo1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontos1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", densidade1, pibpercapita1, superpoder1);

    printf("Carta 2 - %s\n", codigo2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", densidade2, pibpercapita2, superpoder2);

    // ---------- Comparações ----------
    printf("===Comparação das Cartas ===\n");

    printf("População -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           populacao1 > populacao2,
           populacao2 > populacao1,
           populacao1 == populacao2);

    printf("Área -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           area1 > area2,
           area2 > area1,
           area1 == area2);

    printf("PIB -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           pib1 > pib2,
           pib2 > pib1,
           pib1 == pib2);

    printf("Pontos Turísticos -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           pontos1 > pontos2,
           pontos2 > pontos1,
           pontos1 == pontos2);

    printf("Densidade Populacional (menor vence) -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           densidade1 < densidade2,
           densidade2 < densidade1,
           densidade1 == densidade2);

    printf("PIB per Capita -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           pibpercapita1 > pibpercapita2,
           pibpercapita2 > pibpercapita1,
           pibpercapita1 == pibpercapita2);

    printf("Super Poder -> Carta 1 vence: %d | Carta 2 vence: %d | Empate: %d\n",
           superpoder1 > superpoder2,
           superpoder2 > superpoder1,
           superpoder1 == superpoder2);

    printf("Comparação concluída com sucesso!\n");
}





 
    
    


