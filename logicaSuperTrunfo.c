#include <stdio.h>


int main() {
    char codigo1[10], atributoescolhido[40];
    // ao colocar entre chaves o tamanho do char não coloque & em scanf, pois as chaves já serão um ponteiro
    float area1, densidadepopulacional1, pibpercapita1, pib1;
    int npontosturisticos1;
    unsigned long int populacao1, superpoder1; 

    char codigo2[10];
    float area2, densidadepopulacional2, pibpercapita2, pib2;
    int npontosturisticos2;
    unsigned long int populacao2, superpoder2; 




    printf("BEM VINDO AO SUPER TRUNFO! \n");

    printf("----------REGRAS----------\n");
    printf("não utilize pontos ou vírgulas, apenas o número completo\n");
    printf("a carta que tiver o atributo com MAIOR VALOR vence\n");
    printf("quem tiver a MENOR densidade populacional vence\n");
    printf("os estados vão de A até H e as cidades de 1 a 4\n");
    printf("faça uma combinação com esses dados acima para ser o código da carta");
    printf("-----CADASTRO DA CARTA 1-----\n");
    

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("População: \n");
    scanf(" %lu", &populacao1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &npontosturisticos1);

    printf("Área (em km²): \n");
    scanf(" %f", &area1);
    
    printf("PIB: \n");
    scanf(" %f", &pib1);

    if (area1 != 0) {
        densidadepopulacional1 = populacao1 / area1;
    } else {
        densidadepopulacional1 = 0; // Evita divisão por zero
    }

    if (populacao1 != 0) {
        pibpercapita1 = pib1 / populacao1;
    } else {
        pibpercapita1 = 0; // Evita divisão por zero
    }

    superpoder1 = area1 + densidadepopulacional1 + pibpercapita1 + pib1 + npontosturisticos1 + populacao1;
    // superpoder declarado após densidade e pibpercapita, pois é a soma de todos os dados 


    printf("\nRESULTADO carta 1:\n"); // print dos dados da carta 1
    printf("código da carta: %s\n", codigo1);
    printf("População: %lu\n", populacao1); 
    printf("Número de pontos turísticos: %d\n", npontosturisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1); 
    printf("PIB per capita: %.2f\n", pibpercapita1); 
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1); 
    printf("\n");

    
    printf("-----CADASTRO DA CARTA 2-----\n");

    printf("Código da cidade: \n");
    scanf("%s", codigo2);
    
    printf("População: \n");
    scanf(" %lu", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &npontosturisticos2);

    printf("Área (em km²): \n");
    scanf(" %f", &area2);
    
    printf("PIB: \n");
    scanf(" %f", &pib2);

    if (area2 != 0) {
        densidadepopulacional2 = populacao2 / area2;
    } else {
        densidadepopulacional2 = 0; // Evita divisão por zero
    }

    if (populacao2 != 0) {
        pibpercapita2 = pib2 / populacao2;
    } else {
        pibpercapita1 = 2; // Evita divisão por zero
    }

    superpoder2 = area2 + densidadepopulacional2 + pibpercapita2 + pib2 + npontosturisticos2 + populacao2;

    printf("\nRESULTADO carta 2:\n"); // print dos dados da carta 2
    printf("População: %lu\n", populacao2); 
    printf("Número de pontos turísticos: %d\n", npontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2); 
    printf("PIB per capita: %.2f\n", pibpercapita2); 
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2); 
    printf("\n");


    printf("-----------------------------------\n");
    printf("comparação dos atributos e super poder \n");
    printf("selecione um atributo para ser comparado: \n"); 
    // switchs não aceitam palavras, apenas letras individuais
    printf("p - população  P - pib  a - área  d - densidade populacional\n");
    printf("P - pib per capita  n - número de pontos truísticos");
    scanf("%s", atributoescolhido);

    

    /*if(populacao1 > populacao2) { // início das comparações, todas com if e else
        printf("----------\n");
        printf("população:\n");
        printf("1 - carta 1 vence: %lu\n", populacao1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("população:\n");
        printf("0 - carta 2 vence: %lu\n", populacao2);
        printf("----------\n");

    }
    if(pib1 > pib2) {
        printf("----------\n");
        printf("pib:\n");
        printf("1 - carta 1 vence: %.2f\n", pib1);
        printf("----------\n");
    } else {
        printf("----------\n");
        printf("pib:\n");
        printf("0 - carta 2 vence: %.2f\n", pib2);
        printf("----------\n");

    }
    if(area1 > area2) {
        printf("----------\n");
        printf("área:\n");
        printf("1 - carta 1 vence: %.2f\n", area1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("área:\n");
        printf("0- carta 2 vence: %.2f\n", area2);
        printf("----------\n");

    }
    if(npontosturisticos1 > npontosturisticos2) {
        printf("----------\n");
        printf("pontos turísticos:\n");
        printf("1 - carta 1 vence: %d\n", npontosturisticos1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("pontos turísticos:\n");
        printf("0 - carta 2 vence: %d\n", npontosturisticos2);
        printf("----------\n");

    }
    if(pibpercapita1 > pibpercapita2) {
        printf("----------\n");
        printf("pib per capita:\n");
        printf("1 - carta 1 vence: %.2f\n", pibpercapita1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("pib per capita:\n");
        printf("0 - carta 2 vence: %.2f\n", pibpercapita2);
        printf("----------\n");

    }
    if(densidadepopulacional1 < densidadepopulacional2) {
        printf("----------\n");
        printf("densidade populacional:\n");
        printf("1 - carta 1 vence: %.2f\n", densidadepopulacional1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("densidade populacional:\n");
        printf("0- carta 2 vence: %.2f\n", densidadepopulacional2);
        printf("----------\n");

    }
    if(superpoder1 > superpoder2) {
        printf("----------\n");
        printf("super poder:\n");
        printf("1 - carta 1 vence: %lu\n", superpoder1);
        printf("----------\n");

    } else {
        printf("----------\n");
        printf("super poder:\n");
        printf("0- carta 2 vence: %lu\n", superpoder2);
        printf("----------\n");
    }*/
    return 0;
}