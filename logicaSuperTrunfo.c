#include <stdio.h>

int main()
{
    char codigo1[10];
    // ao colocar entre chaves o tamanho do char não coloque & em scanf, pois as chaves já serão um ponteiro
    float area1, densidadepopulacional1, pibpercapita1, pib1;
    int npontosturisticos1, atributoescolhido1, atributoescolhido2;
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
    printf("faça uma combinação com esses dados acima para ser o código da carta\n");
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

    densidadepopulacional1 = (area1 != 0) ? (populacao1 / area1) : 0; // evita divisão por zero
    
    pibpercapita1 = (populacao1 != 0) ? (pib1 / populacao1) : 0;

    superpoder1 = area1 + densidadepopulacional1 + pibpercapita1 + pib1 + npontosturisticos1 + populacao1;
    // superpoder declarado após densidade e pibpercapita, pois é a soma de todos os dados

    printf("\nRESULTADO carta 1:\n"); // print dos dados da carta 1
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Número de pontos turísticos: %d\n", npontosturisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("\n");

    printf("-----CADASTRO DA CARTA 2-----\n");

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("População: \n");
    scanf(" %lu", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &npontosturisticos2);

    printf("Área (em km²): \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    densidadepopulacional2 = (area2 != 0) ? (populacao2 / area2) : 0; // evita divisão por zero
    
    pibpercapita2 = (populacao2 != 0) ? (pib2 / populacao2) : 0;
    

    superpoder2 = area2 + densidadepopulacional2 + pibpercapita2 + pib2 + npontosturisticos2 + populacao2;

    printf("\nRESULTADO carta 2:\n"); // print dos dados da carta 2
    printf("População: %lu\n", populacao2);
    printf("Número de pontos turísticos: %d\n", npontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("\n");

    printf("-------------------------\n");
    printf("COMPARAÇÃO DOS ATRIBUTOS\n");
    printf("selecione dois atributos para serem comparados: \n");
    // switchs não aceitam ponteiros e strings
    /* em C não existe o tipo string, o C considera uma string como um array de "chars"
    ex: "g" (é um char)  "gato" = ['g', 'a', 't', 'o', '\0'], o \0 serve para as funções entenderem onde
    a palavra acaba*/
    printf("1 - população  2- pib  3 - área  4 - número de pontos truísticos\n");
    printf("5 - pib per capita  6 - densidade populacional  7 - superpoder\n");
    scanf("%d\n", &atributoescolhido1);
    scanf("%d\n",atributoescolhido2);
    /* switch (atributoescolhido) // a variável não pode ser char[] e ir dentro do switch
    {
    case 1:  // início das comparações, todas com if e else
        (populacao1 > populacao2 && populacao1 + populacao2 > 50000) ?
            printf("1 - carta 1 vence: %lu\n", populacao1) :
            (populacao2 > populacao1 && populacao1 + populacao2 > 50000) ?
             printf("0 - carta 2 vence: %lu\n", populacao2) :
             printf("empate\n");
        
    
        break;

    case 2:
        (pib1 > pib2 && pib1 + pib2 > 700000) ?
            printf("1 - carta 1 vence: %.2f\n", pib1) :

           (pib1 > pib2 && pib1 + pib2 > 700000) ?
            printf("0 - carta 2 vence: %.2f\n", pib2) :
            printf("empate\n");
        
        break;

    case 3:
        (area1 > area2 && area1 + area2 > 200) ?
            printf("1 - carta 1 vence: %.2f\n", area1) :

           (area1 > area2 && area1 + area2 > 200) ?
            printf("0 - carta 2 vence: %.2f\n", area2) :
            printf("empate\n");
        
        break;
    case 4:
        if (npontosturisticos1 > npontosturisticos2 && npontosturisticos1 + npontosturisticos2 >= 10)
        {
            printf("----------\n");
            printf("pontos turísticos:\n");
            printf("1 - carta 1 vence: %d\n", npontosturisticos1);
            printf("----------\n");

            if (npontosturisticos2 > npontosturisticos1 && npontosturisticos1 + npontosturisticos2 >= 10)
            {
                printf("----------\n");
                printf("pontos turísticos:\n");
                printf("0 - carta 2 vence: %d\n", npontosturisticos2);
                printf("----------\n");
            }
        }
        else
        {
            printf("não foi possível a comparação, revise os dados entregues\n");
        }
        break;

    case 5:

        if (pibpercapita1 > pibpercapita2 && pibpercapita1 + pibpercapita2 > 400)
        {
            printf("----------\n");
            printf("pib per capita:\n");
            printf("1 - carta 1 vence: %.2f\n", pibpercapita1);
            printf("----------\n");

            if (pibpercapita2 > pibpercapita1 && pibpercapita1 + pibpercapita2 > 400)
            {
                printf("----------\n");
                printf("pib per capita:\n");
                printf("0 - carta 2 vence: %.2f\n", pibpercapita2);
                printf("----------\n");
            }
            else
            {
                printf("não foi possível a comparação, revise os dados entregues\n");
            }
        }
        break;

        case 6:
          if(densidadepopulacional1 < densidadepopulacional2) {
        printf("----------\n");
        printf("densidade populacional:\n");
        printf("1 - carta 1 vence: %.2f\n", densidadepopulacional1);
        printf("----------\n");

     if(densidadepopulacional2 < densidadepopulacional1) {
        printf("----------\n");
        printf("densidade populacional:\n");
        printf("0- carta 2 vence: %.2f\n", densidadepopulacional2);
        printf("----------\n");

    }
}   else {
        printf("não foi possível a comparação, revise os dados entregues\n");

   } 
        break;

    case 7:
        if(superpoder1 > superpoder2) {
        printf("----------\n");
        printf("super poder:\n");
        printf("1 - carta 1 vence: %lu\n", superpoder1);
        printf("----------\n");

      if(superpoder2 > superpoder1) {
        printf("----------\n");
        printf("super poder:\n");
        printf("0- carta 2 vence: %lu\n", superpoder2);
        printf("----------\n");
     }
    } else {
        printf("não foi possível a comparação, revise os dados entregues\n");

    }
    break;

    default:
        printf("atributo inválido, tente novamente\n");
    }

    return 0; */

    return 0;
} 