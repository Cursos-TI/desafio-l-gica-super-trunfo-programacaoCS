#include <stdio.h>

int main() {
    
    printf("DESAFIO LÓGICA SUPER TRUNFO - MESTRE!\n");

    // Declaração das variáveis 

    char pais1, pais2;
    char codigoCidade1[5], codigoCidade2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;
    float densidadePopulacionalCidade1, densidadePopulacionalCidade2;

    // Leitura da Carta 1

     printf("Digite a primeira letra do país da Carta 1 (escolha de A-H): ");
     scanf(" %c", &pais1);
     printf("Digite o código da Carta 1 (%c01-%c04): ", pais1, pais1);
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

    printf("\nDigite a primeira letra do país da Carta 2 (escolha de A-H): ");
    scanf(" %c", &pais2);
    printf("Digite o código da Carta 2 (%c01-%c04): ", pais2, pais2);
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

    // Menu Interativo para escolha dos Atributos

    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    scanf(" %d", &opcao1);

    printf("\nEscolha o segundo atributo para comparar: \n");
        if (opcao1 == 1) {
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Número de Pontos Turísticos \n");
        printf("5. Densidade Demográfica \n");
            }else if (opcao1 == 2) {
            printf("1. População \n");
            printf("3. PIB \n");
            printf("4. Número de Pontos Turísticos \n");
            printf("5. Densidade Demográfica \n");
                }else if (opcao1 == 3) {
                printf("1. População \n");
                printf("2. Área \n");
                printf("4. Número de Pontos Turísticos \n");
                printf("5. Densidade Demográfica \n");
                    }else if (opcao1 == 4) {
                    printf("1. População \n");
                    printf("2. Área \n");
                    printf("3. PIB \n");
                    printf("5. Densidade Demográfica \n");
                        }else if (opcao1 == 5) {
                        printf("1. População \n");
                        printf("2. Área \n");
                        printf("3. PIB \n");
                        printf("4. Número de Pontos Turísticos \n");
                        }
                        scanf(" %d", &opcao2);

    

  