#include <stdio.h>
#include <string.h>
 int main() {
 
    char Estado1 [50] , Estado2 [50];
    char Codigocarta1 [5], Codigocarta2 [5];
    char nomedacidade1 [50], nomedacidade2 [50];
    int populacao1, populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float Pibpercapita1, Pibpercapita2;
    float densidadeDemografica1, densidadeDemografica2;
    float superpoder1, superpoder2;

//Cadastro da Carta 1

printf("Vamos começar o cadastro da carta 1\n");
printf("Digite uma letra de 'A' a 'H' (Representando um dos oito estados):\n" );
scanf("%1s", &Estado1);

printf("Digite a letra do estado seguida de um número de 01 a 04:\n " );
scanf("%9s", &Codigocarta1);

printf("Digite o nome da cidade:\n");
getchar(); // Limpa buffer antes de fgets
fgets(nomedacidade1, sizeof(nomedacidade1), stdin);


printf("Digite a população da cidade:\n");
scanf("%d", &populacao1);

printf("Digite a área da cidade:\n");
scanf("%f", &Area1);

printf("Digite o Produto Interno Bruto da cidade:\n");
scanf("%f", &Pib1);

printf("Digite o número de pontos turísticos da cidade:\n");  
scanf("%d", &numerodepontosturisticos1);




//Calculando o PIB per capita e a densidade demográfica
Pibpercapita1 = (populacao1 * 1000000000/ Pib1);
densidadeDemografica1 = (populacao1/Area1);

//Calculando o Super Poder Carta 1 
superpoder1 = populacao1 + Area1 + Pib1 + numerodepontosturisticos1 + Pibpercapita1 + (1/densidadeDemografica1);


//Cadastro da Carta 2

printf("Vamos começar o cadastro da carta 2\n");
printf("Digite uma letra de 'A' a 'H' (Representando um dos oito estados):\n" );
scanf("%1s", &Estado2);

printf("Digite a letra do estado seguida de um número de 01 a 04: ");
scanf("%9s", &Codigocarta2);

printf("Digite o nome da cidade:\n");
getchar(); // Limpa buffer antes de fgets
fgets(nomedacidade2, sizeof(nomedacidade2), stdin);

printf("Digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("Digite a área da cidade:\n");
scanf("%f", &Area2);

printf("Digite o Produto Interno Bruto da cidade:\n");
scanf("%f", &Pib2);

printf("Digite o número de pontos turísticos da cidade:\n");
scanf("%d", &numerodepontosturisticos2);

//Calculando o PIB /per capita e a densidade demográfica
Pibpercapita2 = (Pib2 * 1000000000/populacao2);
densidadeDemografica2 = (populacao2/Area2); 


//CALCULANDO O SUPER PODER CARTA 2
superpoder2 = populacao2 + Area2 + Pib2 + numerodepontosturisticos2 + Pibpercapita2 + (1/densidadeDemografica2);


//Exbição de informações da carta 1
 
printf("====================================\n");
printf("            CARTA 1\n");
printf("====================================\n");
printf("Carta 1\n");
printf("Código da carta: %s\n", Codigocarta1);
printf("Cidade: %s\n", nomedacidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", Area1);
printf("PIB: %.2f\n", Pib1);
printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
printf("PIB per capita: %.2f\n", Pibpercapita1);
printf("Densidade demográfica: %.2f\n", densidadeDemografica1);
printf("Superpoder1: %.2f\n", superpoder1);

printf("\n");

//Exbição de informações da carta 2
printf("====================================\n");   
printf("            CARTA 2\n");
printf("====================================\n");
printf("Carta 2\n");
printf("Código da carta: %s\n", Codigocarta2);
printf("Cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", Area2);
printf("PIB: %.2f\n", Pib2);
printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
printf("PIB per capita: %.2f\n", Pibpercapita2);
printf("Densidade demográfica: %.2f\n", densidadeDemografica2);
printf("Superpoder2: %.2f\n", superpoder2);


//COMPARAÇÕES DAS CARTAS

printf("\n Comparação das Cartas: \n");

printf("====================================\n");
printf     ("COMPARAÇAO DE POPULAÇÂO. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %d\n", nomedacidade1, populacao1);
printf("Carta 2 - %s: %d\n", nomedacidade2, populacao2);

printf("\n");

if (populacao1 > populacao2) {
    printf("Carta 1 venceu\n");
} else if (populacao1 < populacao2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf      ("COMPARAÇAO DE AREA. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %.2f\n", nomedacidade1, Area1);
printf("Carta 2 - %s: %.2f\n", nomedacidade2, Area2);

printf("\n");

if (Area1 > Area2) {
    printf("Carta 1 venceu\n");
} else if (Area1 < Area2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf       ("COMPARAÇAO DE PIB. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %.2f\n", nomedacidade1, Pib1);
printf("Carta 2 - %s: %.2f\n", nomedacidade2, Pib2);

printf("\n");

if (Pib1 > Pib2) {
    printf("Carta 1 venceu\n");
} else if (Pib1 < Pib2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf   ("COMPARAÇAO DE PONTOS TURISTICOS. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %d\n", nomedacidade1, numerodepontosturisticos1);
printf("Carta 2 - %s: %d\n", nomedacidade2, numerodepontosturisticos2);

printf("\n");

if (numerodepontosturisticos1 > numerodepontosturisticos2) {
    printf("Carta 1 venceu\n");
} else if (numerodepontosturisticos1 < numerodepontosturisticos2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf  ("COMPARAÇAO DE DENSIDADE DEMOGRAFICA. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %.2f\n", nomedacidade1, densidadeDemografica1);
printf("Carta 2 - %s: %.2f\n", nomedacidade2, densidadeDemografica2);

printf("\n");

if (densidadeDemografica1 > densidadeDemografica2) {
    printf("Carta 1 venceu\n");
} else if (densidadeDemografica1 < densidadeDemografica2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf   ("COMPARAÇAO DE PIB PER CAPITA. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %.2f\n", nomedacidade1, Pibpercapita1);
printf("Carta 2 - %s: %.2f\n", nomedacidade2, Pibpercapita2);

printf("\n");

if (Pibpercapita1 > Pibpercapita2) {
    printf("Carta 1 venceu\n");
} else if (Pibpercapita1 < Pibpercapita2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

printf("====================================\n");
printf   ("COMPARAÇAO DE SUPER PODER. \n");
printf("====================================\n");

printf("\n");

printf("Carta 1 - %s: %.2f\n", nomedacidade1, superpoder1);
printf("Carta 2 - %s: %.2f\n", nomedacidade2, superpoder2);

printf("\n");

if (superpoder1 > superpoder2) {
    printf("Carta 1 venceu\n");
} else if (superpoder1 < superpoder2) {
    printf("Carta 2 venceu\n");
} else {
    printf("Empate\n");
}

printf("\n");

return 0;

