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

    printf("\nDADOS CADASTRADOS!!!\n\n");
    printf("EXIBINDO CARTAS CADASTRADAS:\n\n");

// Exibe as informações das cartas cadastradas

    printf("*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n habitantes", populacao1);
    printf("Àrea: %.2f km2\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_tur1);

    printf("\n*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Àrea: %.2f km2\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_tur2);

return 0;
}