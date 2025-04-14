#include <stdio.h>
#include <locale.h>
void TorreMove(int T)
{
    if (T > 0)
    {
        printf(" O numero de casa andadas foi: %d\n", T);
        for (T; T > 0; T--)
        {
            printf("%d Direita\n", T);
        }
    }
}
void BispoMove(int B)
{
    if (B > 0)
    {
        printf(" O numero de casa andadas foi: %d \n", B);
        for (B; B > 0; B--)
        {
            printf("%d Direita\n", B);
            printf("%d Cima\n", B);
        }
    }
}
void RainhaMove(int R)
{
    if (R > 0)
    {
        printf(" O numero de casa andadas foi: %d \n", R);
        for (R; R > 0; R--)
        {
            printf("%d esquerda\n", R);
        }
    }
}

int main()
{
    int Torre = 1;
    int Bispo = 1;
    int Rainha = 1;
    int Cavalo;
    int Cavalo_cima = 0;
    int Cavalo_baixo = 0;
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
        scanf("%d", &Torre);
        TorreMove(Torre);
        break;

    case 2:
        printf("  Digite o numero de casa: ");
        scanf("%d", &Bispo);
        BispoMove(Bispo);
        break;
    case 3:
        printf("  Digite o numero de casa: ");
        scanf("%d", &Rainha);
        RainhaMove(Rainha);
        break;

    case 4:
        printf("1: Cima esquerda\n");
        printf("2: Cima direita\n");
        printf("3: Baixo esquerda\n");
        printf("4: Baixo direita\n");
        printf("Digite a direção: ");
        scanf("%d", &Cavalo);
        switch (Cavalo)
        {
        case 1:
        {
            for (Cavalo_cima; Cavalo_cima <= 2; Cavalo_cima++)
            {
                printf("Cima\n");
            }
            printf("Esquerda\n");

            break;
        }
        case 2:
        {
            for (Cavalo_cima; Cavalo_cima <= 2; Cavalo_cima++)
            {
                printf("Cima\n");
            }
            printf("Direita\n");
            break;
        }
        case 3:
        {
            for (Cavalo_baixo; Cavalo_baixo <= 2; Cavalo_baixo++)
            {
                printf("Baixo\n");
            }
            printf("Esquerda\n");

            break;
        }
        case 4:
        {
            for (Cavalo_baixo; Cavalo_baixo <= 2; Cavalo_baixo++)
            {
                printf("Baixo\n");
            }
            printf("Direita\n");

            break;
        }
        default:
        {
            printf("Digite um valor válido:");
            break;
        }
        }
    }
    return 0;
}
