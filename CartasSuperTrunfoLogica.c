#include <stdio.h>

int main()
{
    int pontosCarta1;
    char codigoCarta1[20], cidadeCarta1[255], estadoCarta1[20];
    float areaCarta1, pibCarta1, resultadoPopulacaoCarta1, resultadoPibPercapitaCarta1, superPoderCarta1, resultadoInversoPopulacaoCarta1;
    unsigned long int populacaoCarta1;

    int pontosCarta2;
    char codigoCarta2[20], cidadeCarta2[255], estadoCarta2[20];
    float areaCarta2, pibCarta2, resultadoPopulacaoCarta2, resultadoPibPercapitaCarta2, superPoderCarta2, resultadoInversoPopulacaoCarta2;
    unsigned long int populacaoCarta2;

    int opcao;

    // Carta 1
    printf("Digite a letra que representa o Estado: ");
    scanf("%s", estadoCarta1);
    printf("Digite o código: ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeCarta1);
    printf("Digite a população: ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a Área: ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB: ");
    scanf("%f", &pibCarta1);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontosCarta1);

    // Calcular a Densidade da carta 1
    resultadoPopulacaoCarta1 = (float)populacaoCarta1 / areaCarta1;

    // Inverso da Densidade da carta 1
    resultadoInversoPopulacaoCarta1 = (float)areaCarta1 / populacaoCarta1;

    // Calcular Pib per Capita da carta 1

    resultadoPibPercapitaCarta1 = (float)pibCarta1 / populacaoCarta1;

    // Calcular o super poder da carta 1
    superPoderCarta1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + pontosCarta1 + resultadoPibPercapitaCarta1 + resultadoInversoPopulacaoCarta1;

    // Resultado carta 1
    printf("\nInformações da carta 1 cadastrada abaixo: \n");
    printf("== Carta 1 == \n");
    printf("Estado: %s \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", cidadeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f km² \n", areaCarta1);
    printf("PIB: %.2f bilhões de reais \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d \n", pontosCarta1);
    printf("Densidade populacional: %.2f hab/km² \n", resultadoPopulacaoCarta1);
    printf("Pib per Capita: %.3f reais \n", resultadoPibPercapitaCarta1);

    // Carta 2
    printf("\nDigite a letra que representa o Estado: ");
    scanf("%s", estadoCarta2);
    printf("Digite o código: ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeCarta2);
    printf("Digite a população: ");
    scanf("%lu", &populacaoCarta2);
    printf("Digite a Área: ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB: ");
    scanf("%f", &pibCarta2);
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &pontosCarta2);

    // Calcular a Densidade da carta 2
    resultadoPopulacaoCarta2 = (float)populacaoCarta2 / areaCarta2;

    // Inverso da Densidade  da carta 2
    resultadoInversoPopulacaoCarta2 = (float)areaCarta2 / populacaoCarta2;

    // Calculoar Pib per Capita da carta 2
    resultadoPibPercapitaCarta2 = (float)pibCarta2 / populacaoCarta2;

    // Calcular o super poder da carta 2
    superPoderCarta2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + pontosCarta2 + resultadoPibPercapitaCarta2 + resultadoInversoPopulacaoCarta2;

    // Switch case para o usuário escolher quem vence:

    printf("\n\nEscolha qual atribuito você quer comparar \n");

    printf("\n1 - População \n2 - Área \n3 - PIB \n4 - Número de pontos turísticos \n5 - Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    // População
    case 1:
        if (populacaoCarta1 > populacaoCarta2){
            printf("Carta 1 ganhou");
        }
        else if (pontosCarta1 < pontosCarta2){
            printf("Carta 2 ganhou");
        }
        else{
            printf("Empatou");
        }

        break;
    // Área
    case 2:
        if (areaCarta1 > areaCarta2){
            printf("Carta 1 ganhou");
        }
        else if (areaCarta1 < areaCarta2){
            printf("Carta 2 ganhou");
        }
        else{
            printf("Empatou");
        }
        break;
    // PIB
    case 3:
        if (pibCarta1 > pibCarta2){
            printf("Carta 1 ganhou");
        }
        else if (pibCarta1 < pibCarta2){
            printf("Carta 2 ganhou");
        }
        else{
            printf("Empatou");
        }
        break;
    // Pontos turisticos
    case 4:
        if (pontosCarta1 > pontosCarta2){
            printf("Carta 1 ganhou");
        }
        else if (pontosCarta1 < pontosCarta2){
            printf("Carta 2 ganhou");
        }
        else{
            printf("Empatou");
        }
        break;
    // Densidade
    case 5:
        if (resultadoInversoPopulacaoCarta1 < resultadoInversoPopulacaoCarta2){
            printf("Carta 1 ganhou");
        }
        else if (resultadoInversoPopulacaoCarta2 < resultadoInversoPopulacaoCarta1){
            printf("Carta 2 ganhou");
        }
        else{
            printf("Empatou");
        }
        break;

    default:
        printf("Você escolheu uma opção inválida, execute o código novamente.");
        break;
    }

    // Carta vencedora por if e else:

    /*

    printf("\nComparação de cartas (Atributo: Pib): \n");
    if (pibCarta1 > pibCarta2)
    {
        printf("\nCarta 1 - %s (%s): R$ %.2f\n", cidadeCarta1, estadoCarta1, pibCarta1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", cidadeCarta2, estadoCarta2, pibCarta2);
        printf("\nResultado: Carta 1 (%s) venceu! \n", cidadeCarta1);
    }
    else
    {
        printf("\nCarta 1 - %s (%s): R$ %.2f\n", cidadeCarta1, estadoCarta1, pibCarta1);
        printf("\nCarta 2 - %s (%s): R$ %.2f\n", cidadeCarta2, estadoCarta2, pibCarta2);
        printf("\nResultado: Carta 2 (%s) venceu! \n", cidadeCarta2);
    }


*/
    return 0;
    /*

    Lógica anterior de carta vencedora

    // Resultado carta 2
    printf("\n\nInformações da carta 2 cadastrada abaixo: \n");
    printf("== Carta 2 == \n");
    printf("Estado: %s \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", cidadeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2f km² \n", areaCarta2);
    printf("PIB: %.2f bilhões de reais \n", pibCarta2);
    printf("Número de Pontos Turísticos: %d \n", pontosCarta2);
    printf("Densidade populacional: %.2f hab/km² \n", resultadoPopulacaoCarta2);
    printf("Pib per Capita: %.3f reais \n", resultadoPibPercapitaCarta2);




    // Array com textos para indexar pelo resultado (0 ou 1)
    char *vencedor[2] = {"Carta 2 venceu (0)", "Carta 1 venceu (1)"};

    // Resultado carta vencedora
    printf("\n\nComparação das cartas: \n");
    printf("Área: %s\n", vencedor[areaCarta1 > areaCarta2]);
    printf("PIB: %s\n", vencedor[pibCarta1 > pibCarta2]);
    printf("Pontos Turísticos: %s\n", vencedor[pontosCarta1 > pontosCarta2]);
    printf("Densidade Populacional: %s\n", vencedor[resultadoPopulacaoCarta1 > resultadoPopulacaoCarta2]);
    printf("PIB per Capita: %s\n", vencedor[resultadoPibPercapitaCarta1 > resultadoPibPercapitaCarta2]);
    printf("Super Poder: %s\n", vencedor[superPoderCarta1 > superPoderCarta2]);
    */
}