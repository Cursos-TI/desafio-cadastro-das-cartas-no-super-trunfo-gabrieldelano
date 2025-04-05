
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
#include <stdio.h>
#include <locale.h>
/*não consigo fazer a saída ter pontuação (ja tentei setlocale) não sei se é erro do meu compilardor,mas para fins de comodidade
digite as cartas sem acentuação que irá dar o resultado.*/
//aqui são as cartas que vão ser usadas
//Carta 1
setlocale(LC_ALL, "Portuguese_Brazil"); //aparecer acentos
    char estado1[90];
    char carta_1[40];
    char nome_da_cidade_1[90];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
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
    printf("O numero de habitantes é: %d\n",populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1); 
    printf("A área é: %f \n",area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("O PIB é: %f \n",pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("O numero de pontos turisticos é: %d \n",pontos_turisticos1);


 //Carta 2
 
    char estado2[90];
    char carta_2[40];
    char nome_da_cidade_2[90];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
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


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
