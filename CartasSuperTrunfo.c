#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado1, estado2;
    char codigodacarta1[5], codigodacarta2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, NumpontosTuristicos1, NumpontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    //PREENCHA AS INFORMAÇÕES DA CARTA 1

    printf("Jogo Super Trunfo!\n");
    printf("Carta 1:\n");

    printf("Estado (Inicial):");
    scanf(" %c", &estado1);

    printf("Código da Carta:");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade:");
    scanf(" %s", cidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Número de Pontos Turisticos:");
    scanf("%d", &NumpontosTuristicos1);

    printf("Área em KM²:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    //PREENCHA AS INFORMAÇÕES DA CARTA 2

    printf("Carta 2:\n");

    printf("Estado (Inicial):");
    scanf(" %c", &estado2);

    printf("Código da Carta:");
    scanf("%s", codigodacarta2);

    printf("Nome da Cidade:");
    scanf(" %s", cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Número de Pontos Turisticos:");
    scanf("%d", &NumpontosTuristicos2);

    printf("Área em KM²:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Carta 1:\n");

    printf("Estado(Inicial):%c\n", estado1);
    printf("Código da Carta:%s\n", codigodacarta1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos1);
    printf("Área em KM²:%.2f km²\n",area1);
    printf("PIB:%f\n", pib1);

    printf("Carta 2:\n");

    printf("Estado(Inicial):%c\n", estado2);
    printf("Código da Carta:%s\n", codigodacarta2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos2);
    printf("Área em KM²:%.2f km²\n",area2);
    printf("PIB:%f\n", pib2);


    
    
    return 0;
}
