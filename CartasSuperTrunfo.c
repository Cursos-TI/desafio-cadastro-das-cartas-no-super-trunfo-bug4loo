#include <stdio.h>

int main () {

/* Declaração das variáveis
- Para evitar o uso de estruturas de repetição no código, serão usadas variáveis diferentes para cada uma das cartas cadastradas.
*/

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_tur1, pontos_tur2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;

    printf("CADASTRANDO CARTA 1\n"); // Inicia coleta de dados da primeira carta
    
    printf("Digite o Estado: ");
    scanf ("%c", &estado1);
    
    printf("Digite o código da carta: ");
    scanf ("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf ("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf ("%d", &populacao1);

    printf("Digite a área da cidade (em km2): ");
    scanf ("%f", &area1);
    
    printf("Digite o pib da cidade (em bilhões de reais): ");
    scanf ("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos_tur1);
 
    printf("\nCADASTRANDO CARTA 2\n"); // Inicia coleta de dados da segunda carta
    
    printf("Digite o Estado: ");
    scanf (" %c", &estado2);
    
    printf("Digite o código da carta: ");
    scanf ("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf ("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf ("%d", &populacao2);

    printf("Digite a área da cidade (em km2): ");
    scanf ("%f", &area2);
    
    printf("Digite o pib da cidade (em bilhões de reais): ");
    scanf ("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos_tur2);

    // A densidade demográfica e a renda per capita serão calculados a partir dos dados digitados.

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    
    pibcapita1 = (float) pib1 / populacao1 * 1000000000; // O resultado é multiplicado por 1.000.000.000, uma vez que o valor do PIB é digitado em bilhões
    pibcapita2 = (float) pib2 / populacao2 * 1000000000;
        
    printf("\nDADOS CADASTRADOS!!!\n\n");
    printf("EXIBINDO CARTAS CADASTRADAS:\n\n");

// Exibe as informações das cartas cadastradas

    printf("*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Àrea: %.2f km2\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_tur1);
    printf("Densidade demográfica: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f / habitante\n", pibcapita1);


    printf("\n*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Àrea: %.2f km2\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_tur2);
    printf("Densidade demográfica: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f / habitante\n", pibcapita2);

return 0;
}