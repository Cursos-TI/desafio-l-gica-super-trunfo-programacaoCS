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

    // Cálculo da Densidade Populacional

    densidadePopulacionalCidade1 = populacaoCidade1 / areaCidade1;
    densidadePopulacionalCidade2 = populacaoCidade2 / areaCidade2;

    // Menu Interativo de comparação

    int opcao;
    printf("\nDigite o atributo que deseja comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    printf("Digite a opção desejada: \n");
    scanf(" %d", &opcao);

    switch (opcao) {
    case 1:

    // Comparação da População

    if (populacaoCidade1 > populacaoCidade2) {
    printf("\nPopulação: Carta 1 venceu! \n");
    printf("Valor da Carta 1: %lu habitantes \n", populacaoCidade1);
    printf("Valor da Carta 2: %lu habitantes \n", populacaoCidade2);
        }else if (populacaoCidade2 > populacaoCidade1) {
        printf("\nPopulação: Carta 2 venceu! \n");
        printf("Valor da Carta 1: %lu habitantes \n", populacaoCidade1);
        printf("Valor da Carta 2: %lu habitantes \n", populacaoCidade2);
            }else {
            printf("\nPopulação: Empate! \n");
            printf("Valor da Carta 1: %lu habitantes \n", populacaoCidade1);
            printf("Valor da Carta 2: %lu habitantes \n", populacaoCidade2);
            }
            break;
        case 2:

    // Comparação da Área

    if (areaCidade1 > areaCidade2) {
    printf("\nÁrea: Carta 1 venceu! \n");
    printf("Valor da Carta 1: %.2f km² \n", areaCidade1);
    printf("Valor da Carta 2: %.2f km² \n", areaCidade2);
        }else if (areaCidade2 > areaCidade1) {
        printf("\nÁrea: Carta 2 venceu! \n");
        printf("Valor da Carta 1: %.2f km² \n", areaCidade1);
        printf("Valor da Carta 2: %.2f km² \n", areaCidade2);
            }else {
            printf("\nÁrea: Empate! \n");
            printf("Valor da Carta 1: %.2f km² \n", areaCidade1);
            printf("Valor da Carta 2: %.2f km² \n", areaCidade2);
            }
            break;
        case 3:


    



