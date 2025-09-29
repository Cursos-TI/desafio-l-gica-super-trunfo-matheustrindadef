#include <stdio.h>

// Declarando variaveis
int main() {

    int opcao;
    
    char estado[2];
    char codigo[4];
    char cidade[20];
    long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float denspop;
    float pibpercapita;
    float superpoder;

//variaveis da segunda carta
    char estado2[2];
    char codigo2[4];
    char cidade2[20];
    long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float denspop2;
    float pibpercapita2;
    float superpoder2;

    printf("Digite uma letra para representar o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta por exemplo A01: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("O número de habitantes da cidade: ");
    scanf("%ld", &populacao);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o produto interno da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontos_turisticos);
    
    printf("\n");

    printf("Digite uma letra para representar o estado 2: ");
    scanf("%s", estado2);

    printf("Digite o código da carta por exemplo A01: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("O número de habitantes da cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o produto interno da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Calculos Adicionais
    denspop = populacao / area;
    pibpercapita = (pib * 1e9f) / (float) populacao;
    // Super Poder Carta 1
    superpoder = (area + pib + pontos_turisticos + pibpercapita) - denspop;

    //carta 2
    denspop2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9f) / (float) populacao2;
    // Super Poder Carta 2
    superpoder2 = (area2 + pib2 + pontos_turisticos2 + pibpercapita2) - denspop2;

    printf("*******************************\n");
    //Primeira carta as saidas
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos túristicos: %d\n", pontos_turisticos);
    
    //Adicionais tema2
    printf("Densidade Populacional: %.2f hab/km²\n", denspop);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    
    // Nivel Mestre - Tema 2
    printf("Super poder: %.2f\n", superpoder);

    printf("*******************************\n");
    // Segunda carta as saidas
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos túristicos: %d\n", pontos_turisticos2);
    
    //Nivel aventureiro - Tema 2
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    // Nivel mestre - Tema 2
    printf("Super poder: %.2f\n", superpoder2);

    printf("*******************************\n");
    // Comparação das cartas Nivel novato - Tema 3 com if
    // Menu de comparação com switch
    printf("Para escolher o atributo População digite 1:\n");
    printf("Para escolher o atributo Área digite 2:\n");
    printf("Para escolher o atributo PIB digite 3:\n");
    printf("Para escolher o atributo Densidade Populacional digite 4:\n");
    printf("Para escolher o atributo super poder digite 5:\n");

    printf("Digite a opção do atributo em que deseja comparar o vencedor das cartas: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Comparação de cartas (Atributo: População):\n");

        printf("Carta 1 - %s: %ld\n", cidade, populacao);
        printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
        if (populacao > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (populacao < populacao2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Houve empate!!\n");
        }
        printf("*******************************\n");
        break;

    case 2:
        // Atributo area
        printf("Comparação (Atributo: Área):\n");

        printf("Carta 1 - %s: %f\n", cidade, area);
        printf("Carta 2 - %s: %f\n", cidade2, area2);
        if (area > area2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (area < area2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Houve empate!!\n");
        }
        printf("*******************************\n");
        break;
    case 3:
        // Atributo PIB
        printf("Comparação (Atributo: PIB)\n");

        printf("Carta 1 - %s: %.2f\n", cidade, pib);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        if (pib > pib2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (pib < pib2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Houve empate!!\n");
        }
        printf("*******************************\n");
        break;
    case 4:
        // Atributo densidade populacional
        printf("Comparação (Atributo: Densidade Populacional)\n");

        printf("Carta 1 - %s: %.2f\n", cidade, denspop);
        printf("Carta 2 - %s: %.2f\n", cidade2, denspop2);
        if (denspop > denspop2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (denspop < denspop2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Houve empate!!\n");
        }
        printf("*******************************\n");
        break;
    case 5:
        printf("Comparação (Atributo: Super Poder)\n");

        printf("Carta 1 - %s: %.2f\n", cidade, superpoder);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        if (superpoder < superpoder2){
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (superpoder > superpoder2){
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Houve empate!!\n");
        }
        printf("*******************************\n");
        break;

    default:
        printf("Opção inválida..\n");
        break;
    }
    

    return 0;

}
