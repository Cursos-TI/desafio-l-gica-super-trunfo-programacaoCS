#include <stdio.h>

int main() {
    printf("DESAFIO LÓGICA SUPER TRUNFO - AVENTUREIRO! \n");

    // Declaração das variáveis 

    char estado1, estado2;
    char codigoCidade1[5], codigoCidade2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;
    float densidadePopulacionalCidade1, densidadePopulacionalCidade2;

    // Leitura da Carta 1

    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (%c01-%c04): ", estado1, estado1);
    scanf(" %s", codigoCidade1);
    printf("Digite o nome da Cidade da Carta 1: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população da Cidade da Carta 1: ");
    scanf(" %lu", &populacaoCidade1);
    printf("Digite a área da Cidade da Carta 1 (em km²): ");
    scanf(" %f", &areaCidade1);
    printf("Digite o PIB da Cidade da Carta 1 (em bilhões de reais): ");
    scanf(" %f", &pibCidade1);
    printf("Digite o número de pontos turísticos da Cidade da Carta 1: ");
    scanf(" %d", &pontosTuristicosCidade1);

    // Leitura da Carta 2

    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (%c01-%c04): ", estado2, estado2);
    scanf(" %s", codigoCidade2);
    printf("Digite o nome da Cidade da Carta 2: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população da Cidade da Carta 2: ");
    scanf(" %lu", &populacaoCidade2);
    printf("Digite a área da Cidade da Carta 2 (em km²): ");
    scanf(" %f", &areaCidade2);
    printf("Digite o PIB da Cidade da Carta 2 (em bilhões de reais): ");
    scanf(" %f", &pibCidade2);
    printf("Digite o número de pontos turísticos da Cidade da Carta 2: ");
    scanf(" %d", &pontosTuristicosCidade2);



