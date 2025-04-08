#include <stdio.h>

int main()
{
    int pontos;
    char codigo[20], cidade[255], estado[20];
    float area, pib, resultadoPopulacao, resultadoPibPercapita, superPoder, resultadoInversoPopulacao;
    unsigned long int populacao;

    // Carta 1
    printf("Digite a letra que representa o Estado: ");
    scanf("%s", estado);
    printf("Digite o código: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a Área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontos);

    // Calcular a Densidade da carta 1
    resultadoPopulacao = (float)populacao / area;

    // Inverso da Densidade da carta 1
    resultadoInversoPopulacao = (float)area / populacao;

    // Calculoar Pib per Capita da carta 1
    resultadoPibPercapita = (float)pib / populacao;

    // Calcular o super poder da carta 1
    superPoder = (float)populacao + area + pib + pontos + resultadoPibPercapita + resultadoInversoPopulacao;

    // Resultado carta 1
    printf("\nInformações da carta 1 cadastrada abaixo: \n");
    printf("== Carta 1 == \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);
    printf("Densidade populacional: %.2f hab/km² \n", resultadoPopulacao);
    printf("Pib per Capita: %.3f reais \n", resultadoPibPercapita);

    printf("Super poder carta 1: %.2f", superPoder);

    // Carta 2
    printf("\nDigite a letra que representa o Estado: ");
    scanf("%s", estado);
    printf("Digite o código: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a Área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontos);

    // Calcular a Densidade da carta 2
    resultadoPopulacao = (float)populacao / area;

    // Inverso da Densidade  da carta 2
    resultadoInversoPopulacao = (float)area / populacao;

    // Calculoar Pib per Capita da carta 2
    resultadoPibPercapita = (float)pib / populacao;

    // Calcular o super poder da carta 2
    superPoder = (float)populacao + area + pib + pontos + resultadoPibPercapita + resultadoInversoPopulacao;

    // Resultado carta 2
    printf("\n\nInformações da carta 2 cadastrada abaixo: \n");
    printf("== Carta 2 == \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);
    printf("Densidade populacional: %.2f hab/km² \n", resultadoPopulacao);
    printf("Pib per Capita: %.3f reais \n", resultadoPibPercapita);

    printf("Super poder carta 2: %.2f", superPoder);

    return 0;
}