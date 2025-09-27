#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

    int main() {
    // Variaveis para armazenar os dados de uma carta
    char estado1, estado2;
    char codigo1[3], codigo2[3]; // Ex: "A01"
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2,superpoder1, superpoder2;


    // Entrada de dados da Carta 1
    printf("Cadastro Carta 1\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1;
        


    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
 
    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2;
    
    

    // Exibição das cartas
    printf("Cadastro Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f (em bilhoes)\n", pibpercapita1);
    

    printf("Cadastro Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f (em bilhoes)\n", pibpercapita2); 
    
    
    // Variáveis auxiliares para identificar qual carta venceu
int cartaPopulacao = (populacao1 > populacao2) * 1 + (populacao2 > populacao1) * 2;
int cartaArea = (area1 > area2) * 1 + (area2 > area1) * 2;
int cartaPIB = (pib1 > pib2) * 1 + (pib2 > pib1) * 2;
int cartaPontos = (pontosTuristicos1 > pontosTuristicos2) * 1 + (pontosTuristicos2 > pontosTuristicos1) * 2;
int cartaDensidade = (densidade1 < densidade2) * 1 + (densidade2 < densidade1) * 2; // menor vence
int cartaPIBperCapita = (pibpercapita1 > pibpercapita2) * 1 + (pibpercapita2 > pibpercapita1) * 2;
int cartaSuperPoder = (superpoder1 > superpoder2) * 1 + (superpoder2 > superpoder1) * 2;

// Resultado lógico (1 se Carta 1 venceu, 0 se Carta 2 venceu)
int resultadoPopulacao = populacao1 > populacao2;
int resultadoArea = area1 > area2;
int resultadoPIB = pib1 > pib2;
int resultadoPontos = pontosTuristicos1 > pontosTuristicos2;
int resultadoDensidade = densidade1 < densidade2; // menor vence
int resultadoPIBperCapita = pibpercapita1 > pibpercapita2;
int resultadoSuperPoder = superpoder1 > superpoder2;

// Impressão final das comparações
printf("\n=== Comparacao de Cartas ===\n");
printf("Populacao: Carta %d venceu (%d)\n", cartaPopulacao, resultadoPopulacao);
printf("Area: Carta %d venceu (%d)\n", cartaArea, resultadoArea);
printf("PIB: Carta %d venceu (%d)\n", cartaPIB, resultadoPIB);
printf("Pontos Turisticos: Carta %d venceu (%d)\n", cartaPontos, resultadoPontos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaDensidade, resultadoDensidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", cartaPIBperCapita, resultadoPIBperCapita);
printf("Super Poder: Carta %d venceu (%d)\n", cartaSuperPoder, resultadoSuperPoder);

    
    return 0;

    }