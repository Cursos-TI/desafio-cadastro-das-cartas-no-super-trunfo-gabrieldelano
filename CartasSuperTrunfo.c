
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
#include <stdio.h>
#include <locale.h>
int main()
{
  /*não consigo fazer a saída ter pontuação (ja tentei setlocale) não sei se é erro do meu compilardor,mas para fins de comodidade
  digite as cartas sem acentuação que irá dar o resultado.*/
  // aqui são as cartas que vão ser usadas
  // Carta 1
  setlocale(LC_ALL, "Portuguese_Brazil"); // aparecer acentos
  char estado1[90];
  char carta_1[40];
  char nome_da_cidade_1[90];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  printf("Digite o Estado: ");
  fgets(estado1, 90, stdin);
  printf("O Estado é: %s \n", estado1);
  printf("Codigo da carta: ");
  fgets(carta_1, 40, stdin);
  printf("O código da carta é: %s \n", carta_1);
  printf("Digite a cidade: ");
  fgets(nome_da_cidade_1, 90, stdin);
  printf("O nome da cidade é: %s \n", nome_da_cidade_1);
  printf("Digite o numero de habitantes :");
  scanf("%d", &populacao1);
  printf("O numero de habitantes é: %.d\n", populacao1);
  printf("Digite a área: ");
  scanf("%f", &area1);
  printf("A área é: %.1f\n", area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("O PIB é: %.1f \n", pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);
  printf("O numero de pontos turisticos é: %d \n", pontos_turisticos1);
  float densidade_populacional1 = (float)populacao1 / area1;
  printf("A densidade populacional é: %.2f\n", densidade_populacional1);
  float pib_per_capita1 = pib1 / (float)populacao1;
  printf("O PIB per capita é: %.2f\n", pib_per_capita1);
  printf("CARTA NÚMERO 1 CADASTRADA\n");

  // Carta 2

  char estado2[90];
  char carta_2[40];
  char nome_da_cidade_2[90];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  printf("Digite o Estado: ");
  fgets(estado2, 90, stdin);
  fgets(estado2, 90, stdin); // adcionei mais um fgets porque não estava aparecendo o dado de entrada
  printf("O Estado é: %s \n", estado2);
  printf("Codigo da carta: ");
  fgets(carta_2, 40, stdin);
  printf("O código da carta é: %s \n", carta_2);
  printf("Digite a cidade: ");
  fgets(nome_da_cidade_2, 90, stdin);
  printf("O nome da cidade é: %s \n", nome_da_cidade_2);
  printf("Digite o numero de habitantes :");
  scanf("%d", &populacao2);
  printf("O numero de habitantes é: %d\n", populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  printf("A área é: %f \n", area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("O PIB é: %f \n", pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);
  printf("O numero de pontos turisticos é: %d \n", pontos_turisticos2);
  float densidade_populacional2 = (float)populacao2 / area2;
  printf("A densidade populacional é: %.2f\n", densidade_populacional2);
  float pib_per_capita2 = pib2 / (float)populacao2;
  printf("O PIB per capita é: %.2f\n", pib_per_capita2);
  printf("CARTA NÚMERO 2 CADASTRADA\n");
  // Comparação de cartas

  int opcao;
  int opcao2;

  printf("Vamos comparar os atributos das cartas\n");
  printf("Escolha um dos atributos a seguir: \n");
  printf("1: População\n");
  printf("2: Área\n");
  printf("3: PIB\n");
  printf("4: Pontos turísticos\n");
  printf("5: Densidade de demográfica\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Atributo 1 População:\n");
    {
      printf("Escolha o segundo atributo:\n");
      printf("2: Área\n");
      printf("3: PIB\n");
      printf("4: Pontos turísticos\n");
      printf("5: Densidade de demográfica\n");
      scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 2:
        printf("Atributo 2 Área\n");
        if (populacao1 + area1 > populacao2 + area2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + area2 > populacao1 + area1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 3:
        printf("Atributo 3 PIB\n");
        if (populacao1 + pib1 > populacao2 + pib2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + pib2 > populacao1 + pib1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 4:
        printf("Atributo 4 Pontos turíticos");
        if (populacao1 + pontos_turisticos1 > populacao2 + pontos_turisticos2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + pontos_turisticos2 > populacao1 + pontos_turisticos1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 5:
        printf("Atributo 5 Densidade de demográfica\n");
        if (populacao1 + densidade_populacional1 < populacao2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + densidade_populacional2 < populacao1 + densidade_populacional1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      }
      break;
    }
    break;
  case 2:
    printf("Atributo 2 Área\n");
    {
      printf("Escolha o segundo atributo:\n");
      printf("1: População\n");
      printf("3: PIB\n");
      printf("4: Pontos turísticos\n");
      printf("5: Densidade de demográfica\n");
      scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        printf("Atributo 1 População\n");
        if (populacao1 + area1 > populacao2 + area2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + area2 > populacao1 + area1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 3:
        printf("Atributo 3 PIB\n");
        if (area1 + pib1 > area2 + pib2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (area2 + pib2 > area1 + pib1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 4:
        printf("Atributo 4 Pontos turíticos\n");
        if (area1 + pontos_turisticos1 > area2 + pontos_turisticos2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (area2 + pontos_turisticos2 > area2 + pontos_turisticos2)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 5:
        printf("Atributo 5 Densidade de demográfica\n");
        if (area1 + densidade_populacional1 < area2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (area2 + densidade_populacional2 < area1 + densidade_populacional1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      }
      break;
    }
    break;
  case 3:
    printf("Atributo 3 PIB");
    {
      printf("Escolha o segundo atributo:\n");
      printf("1: População\n");
      printf("2: Área\n");
      printf("4: Pontos turísticos\n");
      printf("5: Densidade de demográfica\n");
      scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        printf("Atributo 1 População\n");
        if (populacao1 + pib1 > populacao2 + pib2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + pib2 > populacao1 + pib1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 2:
        printf("Atributo 2 Área\n");
        if (pib1 + area1 > pib2 + area2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pib2 + area2 > pib1 + area1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 4:
        printf("Atributo 4 Pontos turíticos\n");
        if (pib1 + pontos_turisticos1 > pib2 + pontos_turisticos2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pib2 + pontos_turisticos2 > pib1 + pontos_turisticos1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 5:
        printf("Atributo 5 Densidade de demográfica\n");
        if (pib1 + densidade_populacional1 < pib2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pib2 + densidade_populacional2 < pib1 + densidade_populacional1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      }
      break;
    }
    break;

  case 4:
    printf("Atributo 4 Pontos turísticos\n");
    {
      printf("Escolha o segundo atributo:\n");
      printf("1: População\n");
      printf("2: Área\n");
      printf("3: PIB\n");
      printf("5: Densidade de demográfica\n");
      scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        printf("Atributo 1 População\n");
        if (pontos_turisticos1 + populacao1 > populacao2 + pontos_turisticos2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + pontos_turisticos2 > populacao1 + pontos_turisticos1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 2:
        printf("Atributo 2 Área\n");
        if (pontos_turisticos1 + area1 > pontos_turisticos2 + area2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pontos_turisticos2 + area2 > pontos_turisticos1 + area1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 3:
        printf("Atributo 3 PIB\n");
        if (pontos_turisticos1 + pib1 > pontos_turisticos2 + pib2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pontos_turisticos2 + pib2 > pontos_turisticos1 + pib1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 5:
        printf("Atributo 5 Densidade de demográfica\n");
        if (pib1 + densidade_populacional1 < pib2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pib2 + densidade_populacional2 < pib1 + densidade_populacional1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      }
      break;
    }
    break;
  case 5:
    printf("Atributo 5 Densidade de demográfica\n");
    {
      printf("Escolha o segundo atributo:\n");
      printf("1: População\n");
      printf("2: Área\n");
      printf("3: PIB\n");
      printf("4: Pontos turísticos\n");
      scanf("%d", &opcao2);
      switch (opcao2)
      {
      case 1:
        printf("Atributo 1 População\n");
        if (densidade_populacional1 + populacao1 < populacao2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (populacao2 + densidade_populacional2 < populacao1 + pontos_turisticos1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 2:
        printf("Atributo 2 Área\n");
        if (densidade_populacional1 + area1 < densidade_populacional2 + area2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (densidade_populacional2 + area2 < densidade_populacional1 + area1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 3:
        printf("Atributo 3 PIB\n");
        if (densidade_populacional1 + pib1 < densidade_populacional2 + pib2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (densidade_populacional2 + pib2 < densidade_populacional2 + pib1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      case 4:
        printf("Atributo 4 Pontos turísticos\n");
        if (pontos_turisticos1 + densidade_populacional1 < pontos_turisticos2 + densidade_populacional2)
        {
          printf("CARTA 1 VENCE");
        }
        else if (pontos_turisticos2 + densidade_populacional2 < pontos_turisticos1 + densidade_populacional1)
        {
          printf("CARTA 2 VENCE");
        }
        else
        {
          printf("EMPATE");
        }
        break;
      }
      break;
    }
    break;
   default:
    printf("Digite um valor valido");
  }
  return 0;
}
