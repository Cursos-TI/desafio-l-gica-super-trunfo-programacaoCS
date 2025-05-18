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

    // Comparação dos Atributos

    float somaCidade1 = 0, somaCidade2 = 0;
        if (opcao1 == 1) {
            somaCidade1 += populacaoCidade1;
            somaCidade2 += populacaoCidade2;
        printf("\nPopulação: ");
            if (populacaoCidade1 > populacaoCidade2) {
            printf("Carta 1 venceu! \n");
                }else if (populacaoCidade2 > populacaoCidade1) {
                printf("Carta 2 venceu! \n");
                    }else {
                    printf("Empate! \n");
                    }
                    }else if (opcao1 == 2) {
                        somaCidade1 += areaCidade1;
                        somaCidade2 += areaCidade2;
                    printf("\nÁrea: ");
        if (areaCidade1 > areaCidade2) {
        printf("Carta 1 venceu! \n");
            }else if (areaCidade2 > areaCidade1) {
            printf("Carta 2 venceu! \n");
                }else {
                printf("Empate! \n");
                }
                }else if (opcao1 == 3) {
                    somaCidade1 += pibCidade1;
                    somaCidade2 += pibCidade2;
                printf("\nPIB: ");
                    if (pibCidade1 > pibCidade2) {
                    printf("Carta 1 venceu! \n");
                        }else if (pibCidade2 > pibCidade1) {
                        printf("Carta 2 venceu! \n");
                            }else {
                            printf("Empate! \n");
                            }
                            }else if (opcao1 == 4) {
                                somaCidade1 += pontosTuristicosCidade1;
                                somaCidade2 += pontosTuristicosCidade2;
                            printf("\nNúmero de Pontos Turísticos: ");
                                if (pontosTuristicosCidade1 > pontosTuristicosCidade2) {
                                printf("Carta 1 venceu! \n");
                                    }else if (pontosTuristicosCidade2 > pontosTuristicosCidade1) {
                                    printf("Carta 2 venceu! \n");
                                        }else {
                                        printf("Empate! \n");
                                        }
                                        }else if (opcao1 == 5) {
                                            somaCidade1 += densidadePopulacionalCidade1;
                                            somaCidade2 += densidadePopulacionalCidade2;
                                        printf("\nDensidade Demográfica: ");
                                            if (densidadePopulacionalCidade1 < densidadePopulacionalCidade2) {
                                            printf("Carta 1 venceu! \n");
                                                }else if (densidadePopulacionalCidade2 < densidadePopulacionalCidade1) {
                                                printf("Carta 2 venceu! \n");
                                                    }else {
                                                    printf("Empate! \n");
                                                    }
                                                }
        if (opcao2 == 1) {
            somaCidade1 += populacaoCidade1;
            somaCidade2 += populacaoCidade2;
        printf("\nPopulação: ");
            if (populacaoCidade1 > populacaoCidade2) {
            printf("Carta 1 venceu! \n");
                }else if (populacaoCidade2 > populacaoCidade1) {
                printf("Carta 2 venceu! \n");
                }else {
                printf("Empate! \n");
                }
                    }else if (opcao2 == 2) {
                        somaCidade1 += areaCidade1;
                        somaCidade2 += areaCidade2;
                    printf("\nÁrea: ");
                if (areaCidade1 > areaCidade2) {
                printf("Carta 1 venceu! \n");
                    }else if (areaCidade2 > areaCidade1) {
                    printf("Carta 2 venceu! \n");
                        }else {
                        printf("Empate! \n");
                    }
                    }else if (opcao2 == 3) {
                        somaCidade1 += pibCidade1;
                        somaCidade2 += pibCidade2;
                    printf("\nPIB: ");
                        if (pibCidade1 > pibCidade2) {
                        printf("Carta 1 venceu! \n");
                            }else if (pibCidade2 > pibCidade1) {
                            printf("Carta 2 venceu! \n");
                        }else {
                        printf("Empate! \n");
                    }
                    }else if (opcao2 == 4) {
                        somaCidade1 += pontosTuristicosCidade1;
                        somaCidade2 += pontosTuristicosCidade2;
                    printf("\nNúmero de Pontos Turísticos: ");
                        if (pontosTuristicosCidade1 > pontosTuristicosCidade2) {
                        printf("Carta 1 venceu! \n");
                            }else if (pontosTuristicosCidade2 > pontosTuristicosCidade1) {
                            printf("Carta 2 venceu! \n");
                        }else {
                        printf("Empate! \n");
                    }
                    }else if (opcao2 == 5) {
                        somaCidade1 += densidadePopulacionalCidade1;
                        somaCidade2 += densidadePopulacionalCidade2;
                    printf("\nDensidade Demográfica: ");
                        if (densidadePopulacionalCidade1 < densidadePopulacionalCidade2) {
                        printf("Carta 1 venceu! \n");
                            }else if (densidadePopulacionalCidade2 < densidadePopulacionalCidade1) {
                            printf("Carta 2 venceu! \n");
                        }else {
                        printf("Empate! \n");
                        }
                    }

    
    // Exibição do Resultado

    printf("\nResultado: \n");
    printf("Carta 1: %s - %s \n", nomeCidade1, codigoCidade1);
    printf("Carta 2: %s - %s \n", nomeCidade2, codigoCidade2);
    printf("Soma dos atributos da Carta 1: %.2f \n", somaCidade1);
    printf("Soma dos atributos da Carta 2: %.2f \n", somaCidade2);
    if (somaCidade1 > somaCidade2) {
    printf("Carta 1 venceu! \n");
    }else if (somaCidade2 > somaCidade1) {
    printf("Carta 2 venceu! \n");
    }else {
    printf("Empate! \n");
    }

    