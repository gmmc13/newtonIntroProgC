#include <stdio.h>

int main() {
    char estado1;
    char codigo_da_carta1[4];
    char cidade1[15];
    int populacao1;
    float area1;
    float PIB1;
    int num_ptos_turismo1;

    char estado2;
    char codigo_da_carta2[4];
    char cidade2[15];
    int populacao2;
    float area2;
    float PIB2;
    int num_ptos_turismo2;



    printf("Qual o código da primeira carta? ");
    scanf("%s", codigo_da_carta1);

    printf("Qual o nome da primeira cidade? ");
    scanf("%s", cidade1);

    printf("Qual o estado da primeira cidade? ");
    scanf(" %c", &estado1);

    printf("Qual a população dessa cidade? ");
    scanf("%d", &populacao1);

    printf("Qual a área (em Km2)? ");
    scanf("%f", &area1);

    printf("Qual o PIB (em bilhões de reais)? ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos tem a cidade? ");
    scanf("%d", &num_ptos_turismo1);


    
    printf("\nQual o código da segunda carta? ");
    scanf("%s", codigo_da_carta2);

    printf("Qual o nome da segunda cidade? ");
    scanf("%s", cidade2);

    printf("Qual o estado da segunda cidade? ");
    scanf(" %c", &estado2);

    printf("Qual a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a área (em Km2)? ");
    scanf("%f", &area2);

    printf("Qual o PIB (em bilhões de reais)? ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos tem a cidade? ");
    scanf("%d", &num_ptos_turismo2);


    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km2\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n\n\n", num_ptos_turismo1);


    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km2\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", num_ptos_turismo2);

    return 0;
}