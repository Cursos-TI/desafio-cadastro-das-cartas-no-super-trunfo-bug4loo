#include <stdio.h>
#include <stdlib.h>

int main () {

/* Declaração das variáveis
- Para evitar o uso de estruturas de repetição no código, serão usadas variáveis diferentes para cada uma das cartas cadastradas.
- O nome da cidade está sendo tratado como char, então não devem ser utilizados espaços no nome.
*/

    char pais1[30], pais2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_tur1, pontos_tur2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;
    int escolheAtributo;

    printf("CADASTRANDO CARTA 1\n"); // Inicia coleta de dados da primeira carta
    
    printf("Digite o nome do País: ");
    scanf ("%s", pais1);
          
    printf("Digite a população do país: ");
    scanf ("%d", &populacao1);

    printf("Digite a área do país (em km2): ");
    scanf ("%f", &area1);
    
    printf("Digite o pib do país (em bilhões de reais): ");
    scanf ("%f", &pib1);
    
    printf("Digite o número de pontos turísticos do país: ");
    scanf ("%d", &pontos_tur1);
 
    printf("\nCADASTRANDO CARTA 2\n"); // Inicia coleta de dados da segunda carta
    
    printf("Digite o nomeo do país: ");
    scanf ("%s", pais2);

    printf("Digite a população do país: ");
    scanf ("%d", &populacao2);

    printf("Digite a área do país (em km2): ");
    scanf ("%f", &area2);
    
    printf("Digite o pib do país (em bilhões de reais): ");
    scanf ("%f", &pib2);
    
    printf("Digite o número de pontos turísticos do país: ");
    scanf ("%d", &pontos_tur2);

    // A densidade demográfica e a renda per capita serão calculados a partir dos dados digitados.

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    
    pibcapita1 = (float) pib1 / populacao1 * 1000000000; // O resultado é multiplicado por 1.000.000.000, uma vez que o valor do PIB é digitado em bilhões
    pibcapita2 = (float) pib2 / populacao2 * 1000000000;

    // Calcular o Super Poder de cada carta

    superpoder1 = area1 + pib1 + (float) pontos_tur1 + (1 / densidade1) + pibcapita1;
    superpoder2 = area2 + pib2 + (float) pontos_tur2 + (1 / densidade2) + pibcapita2;

    printf("\nDADOS CADASTRADOS!!!\n\n");
    printf("EXIBINDO CARTAS CADASTRADAS:\n\n");

    // Exibe as informações das cartas cadastradas

    printf("*** CARTA 1 ***\n");
    printf("Nome do País (sem espaços): %s\n", pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Àrea: %.2f km2\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_tur1);
    printf("Densidade demográfica: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f / habitante\n", pibcapita1);

    printf("\n*** CARTA 2 ***\n");
    printf("Nome do País (sem espaços): %s\n", pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_tur2);
    printf("Densidade demográfica: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f / habitante\n", pibcapita2);

    printf("\n*** HORA DA BATALHA! ***\n\n");
    printf("Escolha o Atributo da Batalha: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a sua escolha:");
    scanf("%d", &escolheAtributo);
       
    switch (escolheAtributo)
    {
    case 1:
        printf("\nCarta 1: %s - População: %d\n", pais1, populacao1);
        printf("vs.\n");
        printf("Carta 2: %s - População: %d\n", pais2, populacao2);
        if(populacao1 == populacao2)
            printf("EMPATE!!!\n");
            else if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", pais1);
        else
        printf("Carta 2 (%s) venceu!\n", pais2);

        break;
        case 2:
        printf("\nCarta 1: %s - Área: %.2f\n", pais1, area1);
        printf("vs.\n");
        printf("Carta 2: %s - Área: %.2f\n\n", pais2, area2);
        if(area1 == area2)
            printf("EMPATE!!!\n");
            else if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n\n", pais1);
        else
        printf("Carta 2 (%s) venceu!\n", pais2);
        break;

    case 3:
        printf("\nCarta 1: %s - PIB: %.2f\n", pais1, pib1);
        printf("vs.\n");
        printf("Carta 2: %s - PIB: %.2f\n\n", pais2, pib2);
        if(pib1 == pib2)
            printf("EMPATE!!!\n");
            else if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", pais1);
        else
        printf("Carta 2 (%s) venceu!\n", pais2);
        break;

        case 4:
        printf("\nCarta 1: %s - Pontos turísticos: %d\n", pais1, pontos_tur1);
        printf("vs.\n");
        printf("Carta 2: %s - Pontos turísticos: %d\n\n", pais2, pontos_tur2);
        if(pontos_tur1== pontos_tur2)
            printf("EMPATE!!!\n");
            else if (pontos_tur1 > pontos_tur2)
                printf("Carta 1 (%s) venceu!\n", pais1);
        else
        printf("Carta 2 (%s) venceu!\n", pais2);
        break;

        case 5:
        printf("\nCarta 1: %s - Densidade demográfica: %f\n", pais1, densidade1);
        printf("vs.\n");
        printf("Carta 2: %s - Densidade demográfica: %f\n\n", pais2, densidade2);
        if(densidade1 == densidade2)
            printf("EMPATE!!!\n");
            else if (densidade1 < densidade2)
                printf("Carta 1 (%s) venceu!\n", pais1);
        else
        printf("Carta 2 (%s) venceu!\n", pais2);
        break;
    
    default:
        printf("Opção inválida!");
        break;
    }
    
    printf("\n\n *** OBRIGADO POR JOGAR ***\n\n");

return 0;
}