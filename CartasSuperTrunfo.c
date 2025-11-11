#include <stdio.h>

int main() {
    // ---------- Carta 1 ----------
    char codigo1[4];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    // ---------- Carta 2 ----------
    char codigo2[4];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    int escolha;

    printf("=== SUPER TRUNFO ===\n");

    // ---------- Cadastro da Carta 1 ----------
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Código da Carta: ");
    scanf("%3s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (populacao1 / 1000000.0) + (pib1 * 10) + (pontos1 * 5) + pibpercapita1 - (densidade1 / 1000);

    // ---------- Cadastro da Carta 2 ----------
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

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (populacao2 / 1000000.0) + (pib2 * 10) + (pontos2 * 5) + pibpercapita2 - (densidade2 / 1000);

    // ---------- Exibição das Cartas ----------
    printf("\n=== CARTA 1 - %s ===\n", codigo1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontos1);
    printf("Densidade: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n", densidade1, pibpercapita1, superpoder1);

    printf("\n=== CARTA 2 - %s ===\n", codigo2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontos2);
    printf("Densidade: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n", densidade2, pibpercapita2, superpoder2);

    // ---------- Menu de comparação ----------
    printf("\n=== Escolha um atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor é melhor)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n=== Resultado da Comparação ===\n");

    // ---------- SWITCH + IF-ELSE ----------
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("Carta 1 venceu em POPULAÇÃO!\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu em POPULAÇÃO!\n");
            else
                printf("Empate em POPULAÇÃO!\n");
            break;

        case 2:
            if (area1 > area2)
                printf("Carta 1 venceu em ÁREA!\n");
            else if (area2 > area1)
                printf("Carta 2 venceu em ÁREA!\n");
            else
                printf("Empate em ÁREA!\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("Carta 1 venceu em PIB!\n");
            else if (pib2 > pib1)
                printf("Carta 2 venceu em PIB!\n");
            else
                printf("Empate em PIB!\n");
            break;

        case 4:
            if (pontos1 > pontos2)
                printf("Carta 1 venceu em PONTOS TURÍSTICOS!\n");
            else if (pontos2 > pontos1)
                printf("Carta 2 venceu em PONTOS TURÍSTICOS!\n");
            else
                printf("Empate em PONTOS TURÍSTICOS!\n");
            break;

        case 5:
            if (densidade1 < densidade2)
                printf("Carta 1 venceu em DENSIDADE POPULACIONAL (menor é melhor)!\n");
            else if (densidade2 < densidade1)
                printf("Carta 2 venceu em DENSIDADE POPULACIONAL (menor é melhor)!\n");
            else
                printf("Empate em DENSIDADE POPULACIONAL!\n");
            break;

        case 6:
            if (pibpercapita1 > pibpercapita2)
                printf("Carta 1 venceu em PIB per CAPITA!\n");
            else if (pibpercapita2 > pibpercapita1)
                printf("Carta 2 venceu em PIB per CAPITA!\n");
            else
                printf("Empate em PIB per CAPITA!\n");
            break;

        case 7:
            if (superpoder1 > superpoder2)
                printf("Carta 1 venceu em SUPER PODER!\n");
            else if (superpoder2 > superpoder1)
                printf("Carta 2 venceu em SUPER PODER!\n");
            else
                printf("Empate em SUPER PODER!\n");
            break;

        default:
            printf("Opção inválida. Escolha entre 1 e 7.\n");
            break;
    }

    printf("\n=== Fim da comparação! ===\n");

    return 0;
}





 
    
    


