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
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;
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

    DensidadePopulacional1 = (populacao1 / area1);
    PIBperCapita1 = (pib1 / (float)populacao1);
    SuperPoder1 = (populacao1 + area1 + pib1 + NumpontosTuristicos1 + PIBperCapita1 + (1.0 / DensidadePopulacional1) );
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

    DensidadePopulacional2 = (populacao2 / area2);
    PIBperCapita2 = (pib2 / (float)populacao2);
    SuperPoder2 = (populacao2 + area2 + pib2 + NumpontosTuristicos2 + PIBperCapita2 + (1.0 / DensidadePopulacional2
    ) );

    //DADOS CARTA 1

    printf("Carta 1:\n");

    printf("Estado(Inicial):%c\n", estado1);
    printf("Código da Carta:%s\n", codigodacarta1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos1);
    printf("Área:%.2f km²\n",area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional1);
    printf("PIB per Capita:%f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);


    // DADOS CARTA 2

    printf("Carta 2:\n");

    printf("Estado(Inicial):%c\n", estado2);
    printf("Código da Carta:%s\n", codigodacarta2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos2);
    printf("Área:%.2f km²\n",area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional2);
    printf("PIB per Capita:%f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //PARTE DA COMPARAÇÃO ONDE A CARTA 1 E A CARTA 2 VÃO SER COMPARADAS COM (0) PARA FALSO E (1) PARA VERDADEIRO

    printf("População = Carta 1 > Carta 2: %d\n", populacao1 > populacao2);
    printf("Números de Pontos Turisticos = Carta 1 > Carta 2: %d\n", NumpontosTuristicos1 > NumpontosTuristicos2);
    printf("Área = Carta 1 > Carta 2: %d\n", area1 > area2);
    printf("PIB = Carta 1 > Carta 2: %d\n", pib1 > pib2);
    printf("Densidade Populacional = Carta 1 > Carta 2: %d\n", DensidadePopulacional1 > DensidadePopulacional2);
    printf("PIB per Capita = Carta 1 > Carta 2: %d\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder = Carta 1 > Carta 2: %d\n", SuperPoder1 > SuperPoder2);

    
    
    return 0;
}
