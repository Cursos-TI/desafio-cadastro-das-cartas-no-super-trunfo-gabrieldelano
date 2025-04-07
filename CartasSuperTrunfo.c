
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
#include <stdio.h>
#include <locale.h>
int main() {
       /*não consigo fazer a saída ter pontuação (ja tentei setlocale) não sei se é erro do meu compilardor,mas para fins de comodidade
       digite as cartas sem acentuação que irá dar o resultado.*/
       //aqui são as cartas que vão ser usadas
       //Carta 1
        setlocale(LC_ALL, "Portuguese_Brazil"); //aparecer acentos
        char estado1[90];
        char carta_1[40];
        char nome_da_cidade_1[90];
      unsigned long int populacao1;
        float area1;
        float pib1;
        int pontos_turisticos1;
        float densidade_populacional1;
        densidade_populacional1 = populacao1 / area1;
        float pib_per_capita1;
        pib_per_capita1 = pib1 / populacao1;
        printf("Digite o Estado: ");
        fgets(estado1,90,stdin);
        printf("O Estado é: %s \n",estado1);
        printf("Codigo da carta: ");
        fgets(carta_1,40,stdin);
        printf("O código da carta é: %s \n",carta_1);
        printf("Digite a cidade: ");
        fgets(nome_da_cidade_1,90,stdin);
        printf("O nome da cidade é: %s \n",nome_da_cidade_1);
        printf("Digite o numero de habitantes :");
        scanf("%d", &populacao1 );
        printf("O numero de habitantes é: %.d\n",populacao1);
        printf("Digite a área: ");
        scanf("%f", &area1); 
        printf("A área é: %f\n",area1);
        printf("Digite o PIB: ");
        scanf("%f", &pib1);
        printf("O PIB é: %f \n",pib1);
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos1);
        printf("O numero de pontos turisticos é: %d \n",pontos_turisticos1);
        printf("A densidade populacional é: %.2f\n",densidade_populacional1);
        printf("O PIB per capita é:  %.2f\n",pib_per_capita1);
        printf("CARTA NÚMERO 1 CADASTRADA\n");

       //Carta 2
     
        char estado2[90];
        char carta_2[40];
        char nome_da_cidade_2[90];
       unsigned long int populacao2;
        float area2;
        float pib2;
        int pontos_turisticos2;
        float densidade_populacional2;
        densidade_populacional2 = populacao2 / area2;
        float pib_per_capita2;
        pib_per_capita2 = pib2 / populacao2;
        printf("Digite o Estado: ");
        fgets(estado2 , 90 , stdin);
        fgets(estado2 , 90 , stdin); //adcionei mais um fgets porque não estava aparecendo o dado de entrada
        printf("O Estado é: %s \n",estado2);
        printf("Codigo da carta: ");
        fgets(carta_2,40,stdin);
        printf("O código da carta é: %s \n",carta_2);
        printf("Digite a cidade: ");
        fgets(nome_da_cidade_2,90,stdin);
        printf("O nome da cidade é: %s \n",nome_da_cidade_2);
        printf("Digite o numero de habitantes :");
        scanf("%d", &populacao2 );
        printf("O numero de habitantes é: %d\n",populacao2);
        printf("Digite a área: ");
        scanf("%f", &area2); 
        printf("A área é: %f \n",area2);
        printf("Digite o PIB: ");
        scanf("%f", &pib2);
        printf("O PIB é: %f \n",pib2);
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos2);
        printf("O numero de pontos turisticos é: %d \n",pontos_turisticos2);
        printf("A densidade populacional é: %.2f\n",densidade_populacional2);
        printf("O PIB per capita é:  %.2f\n",pib_per_capita2);
        printf("CARTA NÚMERO 2 CADASTRADA\n");
        printf("Comparação das cartas: se receber 1 carta 1 vence se receber 0 carta 2 vence \n");
        printf("População:%d\n", populacao1 >  populacao2);
        printf("Área:%d\n",area1 > area2);
        printf("PIB: %d\n", pib1 > pib2);
        printf("Pontos Turisticos %d\n", pontos_turisticos1 > pontos_turisticos2);
        printf("Densidade populacional: %d\n", densidade_populacional1 > densidade_populacional2);
        printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
        if(pontos_turisticos1 > pontos_turisticos2){
          printf("A primeira carta tem mais pontos turíticos");
        } else{
          printf("A segunda carta tem mais pontos turíticos");
        }

       /*Notas de desenvolvimento: na comparação entre densidade populacional e PIB per capita,
       a segunda carta vence pelo motivo de não conseguir desenvolver direito o sistema de divisão.
       Mesmo convertendo os valores para números flutuantes, a operação não é efetuada direito.
       Se puder me dar uma solução para o problema, agradeceria muito.*/
 return 0;
}
    
