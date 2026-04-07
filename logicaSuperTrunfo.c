#include <stdio.h>


int main() {

  char state,state2;
  char codigoState[6], cidade[70], codigoState2[6], cidade2[70], 
       nomeAtributo[30], nomeAtributo2[30];
  int pontosTuristico, pontosTuristico2,escolhaAtributo;
  unsigned long int population, population2;
  float areaKM,PIB, areaKM2, PIB2,densidade,densidade2,
        PIBCapita,PIBCapita2,superPoderA,superPoderB;

  // INFORMACOES CARTA 01

  printf("Ola! Digite uma letra entre A e H: ");
  scanf(" %c", &state);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %lu", &population);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico);

  densidade = population/areaKM;
  PIBCapita = PIB/population;

  superPoderA = population + areaKM + pontosTuristico + PIB + PIBCapita + (1 / densidade);

  // INFORMACOES PARA CARTA 02
  printf("\n\nVamos para carta 02!\nDigite uma letra entre A e H: ");
  scanf(" %c", &state2);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState2);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %lu", &population2);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM2);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB2);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico2);

  densidade2 = population2/areaKM2;
  PIBCapita2 = PIB2/population2;

  superPoderB = population2 + areaKM2 + pontosTuristico2 + PIB2 + PIBCapita2 + (1 / densidade2);

  // Área para CARTA 01 exibição dos dados da cidade
    printf("\nCarta 01");
    printf("\nEstado: %c",state);
    printf("\nCodigo: %c%s",state,codigoState);
    printf("\nCidade: %s",cidade);
    printf("\nPopulacao: %lu habitantes",population);
    printf("\nArea: %f km²",areaKM);
    printf("\nPIB: %f bilhões de reais",PIB);
    printf("\nPontos Turisticos: %d",pontosTuristico);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade);
    printf("\nPIB per Capita: R$%.2f reais",PIBCapita);

  // Área para CARTA 02 exibição dos dados da cidade

    printf("\n\nCarta 02");
    printf("\nEstado: %c",state2);
    printf("\nCodigo: %c%s",state2,codigoState2);
    printf("\nCidade: %s",cidade2);
    printf("\nPopulacao: %lu habitantes",population2);
    printf("\nArea: %f km²",areaKM2);
    printf("\nPIB: %f bilhões de reais",PIB2);
    printf("\nPontos Turisticos: %d",pontosTuristico2);
    printf("\nDensidade Populacional: %.2f hab/km²",densidade2);
    printf("\nPIB per Capita: R$%.2f reais",PIBCapita2);

    
        // MENU INTERATIVO

    int escolhaAtributo2;
    float valorA,valorB,valor2A,valor2B;

    printf("\n\nEscolha o primeiro atributo:\n");
    printf( "1. População\n"
            "2. Área\n"
            "3. PIBs\n"
            "4. Pontos Turisticos\n"
            "5. Densidade Demografica\n"
            "Primerio atributo: ");
    scanf("%d", &escolhaAtributo);
    printf("\nEscolha um segundo atributo:\n ");

    //MENU PRIMEIRO ATRIBUTO
    
    switch(escolhaAtributo){

        case 1:
        valorA = population;
        valorB = population2;
        break;

        case 2:
        valorA = areaKM;
        valorB = areaKM2;
        break;

        case 3:
        valorA = PIB;
        valorB = PIB2;
        break;

        case 4:
        valorA = pontosTuristico;
        valorB = pontosTuristico2;
        break;

        case 5:
        valorA = densidade;
        valorB = densidade2;
        break;

        }

    // MENU SEGUNDO ATRIBUTO
    switch(escolhaAtributo){
    case 1:
        printf( "\n2. Area\n"
                "3. PIB\n"
                "4. Pontos Turisticos\n"
                "5. Densidade\n"
                "Atributo: ");
        sprintf(nomeAtributo, "Populacao");
        break;

    case 2:
        printf( "1. Populacao\n"
                "3. PIB\n"
                "4. Pontos Turisticos\n"
                "5. Densidade\n"
                "Atributo: ");
        sprintf(nomeAtributo, "Area");
        break;

    case 3:
        printf( "1. Populacao\n"
                "2. Area\n"
                "4. Pontos Turisticos\n"
                "5. Densidade\n"
                "Atributo: ");
        sprintf(nomeAtributo, "PIB");
        break;

    case 4:
        printf( "1. Populacao\n"
                "2. Area\n"
                "3. PIB\n"
                "5. Densidade\n"
                "Atributo: ");
        sprintf(nomeAtributo, "Pontos Turisticos");
        break;

    case 5:
        printf( "1. Populacao\n"
                "2. Area\n"
                "3. PIB\n"
                "4. Pontos Turisticos\n"
                "Atributo: ");
        sprintf(nomeAtributo, "Densidade");
        break;

}
    scanf("%d", &escolhaAtributo2);

    // SEGUNDO ATRIBUTO INFO
    switch (escolhaAtributo2){
   
    case 1:
        valor2A = population;
        valor2B = population2;
        sprintf(nomeAtributo2, "Populacao");
    break;

    case 2:
        valor2A = areaKM;
        valor2B = areaKM2;
        sprintf(nomeAtributo2, "Area");
    break;

    case 3:
        valor2A = PIB;
        valor2B = PIB2;
        sprintf(nomeAtributo2, "PIB");
    break;

    case 4:
        valor2A = pontosTuristico;
        valor2B = pontosTuristico2;
        sprintf(nomeAtributo2, "Pontos Turisticos");
    break;

    case 5:
        valor2A = densidade;
        valor2B = densidade2;
        sprintf(nomeAtributo2, "Densidade");
    break;

    }

    float somaA = valorA + valor2A;
    float somaB = valorB + valor2B;

    printf("\n\nComparacao de cartas:");
    printf("\n%s (%s) VS %s (%s)", cidade, nomeAtributo, cidade2, nomeAtributo2);

    printf("\n\n%s:", nomeAtributo);
    printf("\n%s: %.2f", cidade, valorA);
    printf("\n%s: %.2f", cidade2, valorB);

    printf("\n\n%s:", nomeAtributo2);
    printf("\n%s: %.2f", cidade, valor2A);
    printf("\n%s: %.2f", cidade2, valor2B);

    printf("\n\nSoma dos atributos:");
    printf("\n%s: %.2f", cidade, somaA);
    printf("\n%s: %.2f", cidade2, somaB);

    if(somaA > somaB){
    printf("\n\n%s venceu!", cidade);
    }
    else if(somaB > somaA){
    printf("\n\n%s venceu!", cidade2);
    }
    else{
    printf("\n\nEmpate!");
    }


    return(0);
}
