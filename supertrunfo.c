#include <stdio.h>

int main()  {
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1 , densidade2;
    float percapita1 , percapita2;
    float superpoder1, superpoder2;

    //INFORMAÇOES DA PRIMEIRA CARTA
    printf("Cadastro da carta 1\n");
    printf("Digite o nome do estado: \n"); 
    scanf("%s", estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: \n");
    scanf("%f", &area1);
    printf("Digite o pib em bilhoes de reais: \n");
    scanf("%f", &pib1);
    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    
    //Calculando a Densidade e Pib da carta 1:
   percapita1 = (pib1 * 1000000000/ area1);
   densidade1 = (populacao1 / area1);

   //Calculo dos Super Poderes
   superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + percapita1 + (1 / densidade1);
   superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + percapita2 + (1 / densidade2);

   //INFORMAÇOES DA SEGUNDA CARTA
    printf("Cadastro da carta 2\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: \n");
    scanf("%f", &area2);
    printf("Digite o pib em bilhoes de reais: \n");
    scanf("%f", &pib2);
    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

   //Calculando a Densidade e Pib da carta 2:
   percapita2 = (pib2 * 1000000000/ area2);
   densidade2 = (populacao2 / area2);


   //EXIBIÇAO DA PRIMEIRA CARTA
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n" , nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    


    //EXIBIÇAO DA SEGUNDA CARTA
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n" , nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    //Resultados das Comparações
    printf("\n Comparação das Cartas: \n");
    printf("População: carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2)); 
    printf("PIB: carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Super Poder: carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));
