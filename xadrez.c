#include <stdio.h>
#include <locale.h>
void TorreMove(int T)
{
    if (T > 0)
    {
        printf(" O numero de casa andadas foi: %d ", T);
    }
    for (T = 1; T < 7; T++)
    {
        printf("Direita\n");
    }
}
void BispoMove(int B ,int Bv, int Bh)
{
   
    printf(" O numero de casa andadas foi: %d \n", B);
    for (Bv = 1; Bv < 6; Bv++)
    {
        printf("Direita\n");
    }
    for (Bh = 1; Bh < 6; Bh++){
        printf("Cima\n");
    }
}
void RainhaMove(int R)
{
    if (R > 0)
    {
        printf(" O numero de casa andadas foi: %d ", R);
    }
    for (R = 1; R < 7; R++)
    {
        printf("esquerda\n");
    }
}

int main()
{
    int Torre = 1;
    int Bispo = 1;
    int Rainha = 1;
    int Cavalo_baixo = 1;
    int Cavalo_esquerda = 1;
    int opcao;
    int pecas;
    int opcao_sair;
    int T;
    int B;
    int Bv;
    int Bh;
    int R;

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
    printf("4: Cavalo\n");
    scanf("%d", &pecas);
    switch (pecas)
    {
    case 1:
        printf("  Digite o numero de casas: ");
        scanf("%d", &T);
        TorreMove(T);
        break;

    case 2:
        printf("  Digite o numero de casa: ");
        scanf("%d",&B);
        BispoMove(B,Bv,Bh);
        break;
    case 3:
    printf("  Digite o numero de casa: ");
    scanf("%d",&R);
    RainhaMove(R);
        break;

    case 4:
        printf("O cavalo vai movimenta-se 2 casas para cima e 1 casa para direita\n");
        for (Cavalo_esquerda; Cavalo_esquerda <= 3; Cavalo_esquerda++)
        {
            printf("Direita\n");
            while (Cavalo_baixo < 3)
            {
                printf("Cima\n");
                Cavalo_baixo++;
            }
            printf(" O Cavalo moveu-se no total 2 casas para cima e 1 para direita\n");
            break;
        }
    }
    return 0;
}
