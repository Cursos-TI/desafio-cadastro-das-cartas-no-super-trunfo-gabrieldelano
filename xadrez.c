#include <stdio.h>
#include <locale.h>
int main()
{
    int Torre = 1;
    int Bispo = 1;
    int Rainha = 1;
    int opcao;
    int pecas;
    int opcao_sair;

    printf("1: Jogar\n");
    printf("2: Regras\n");
    printf("3: Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Xadrez\n");
        break;
    case 2:
        printf("Escolha uma peça\n");
        printf("Caso for Torre:\n Move-se em linha reta horizontalmente ou verticalmente. Torre move-se cinco casas para a direita.\n");
        printf("Caso for Bispo:\n Move-se na diagonal. Bispo move-se cinco casas na diagonal para cima e à direita.\n");
        printf("Caso for Rainha:\n Move-se em todas as direções. Rainha move-se oito casas para a esquerda.\n");
        printf("3: Sair\n");
        scanf("%d", &opcao_sair);
        switch (opcao_sair)
        {
        case 3:
            return main();
            break;
        default:
            printf("Digite um valor valido\n");
            break;
        }
        break;
    case 3:
        printf("Saindo....\n");
        break;
    default:
        printf("Digite um valor valido!\n");
    }
    printf("Escolha uma peça\n");
    printf("1: Torre\n");
    printf("2: Bispo\n");
    printf("3: Rainha\n");
    scanf("%d", &pecas);
    switch (pecas)
    {
    case 1:
     printf("  A torre vai movimenta-se uma casa para direita\n");
        while (Torre <= 5)
        {
            printf("A torre vai movimenta-se 1 casa para direita\n");
            Torre++;
        }
        printf("  A torre moveu-se no total 5 casas para direita\n");
        break;

    case 2:
        printf("  O Bispo vai movimenta-se uma casa para cima e ao mesmo tempo para direita\n");
        do
        {
            printf("Cima\n");
            printf("Direita\n");
            Bispo++;
        } while (Bispo <= 5);
        printf("  O bispo moveu-se no total 5 casas para direita e para cima\n");
        break;
    case 3:
    printf("A rainha vai movimenta-se oito casas para esquerda\n ");
    for(Rainha;Rainha<=8;Rainha++){
        printf("A Rainha movimenta-se 1 casa para esquerda\n");
    }
    printf("  A Rainha moveu-se no total 8 casas para esquerda\n ");
    break;
    }
    return 0;
}
