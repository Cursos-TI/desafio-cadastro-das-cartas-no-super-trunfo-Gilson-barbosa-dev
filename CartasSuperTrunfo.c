#include <stdio.h>

int main(){
    int populacao, pontos;
    char codigo[20], cidade[255], estado[20];
    float area, pib;

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
    
    return 0;


}