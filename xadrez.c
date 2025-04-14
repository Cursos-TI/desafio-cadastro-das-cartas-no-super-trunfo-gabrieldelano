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
void RainhaMoveV(int Rv)
{
    if (Rv > 0)
    {
        printf(" O numero de casa andadas na vertical foi: %d \n", Rv);
        for (Rv; Rv > 0; Rv--)
        {
            printf("%d Cima\n", Rv);
        }
    }
}
void RainhaMoveH(int Rh)
{
    if (Rh > 0)
    {
        printf(" O numero de casa andadas horizontal foi: %d \n", Rh);
        for (Rh; Rh > 0; Rh--)
        {
            printf("%d esquerda\n", Rh);
        }
    }
}

int main()
{
    int Torre = 1;
    int Bispo = 1;
    int Rainha = 1;
    int RainhaH = 1;
    int RainhaV = 1;
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
        printf("Caso for Torre:\n Move-se em linha reta horizontalmente.\n");
        printf("Caso for Bispo:\n Move-se na diagonal.\n");
        printf("Caso for Rainha:\n Move-se em todas as direções.\n");
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
        printf("  Digite o numero de casas na horizontal: ");
        scanf("%d", &Rainha);
        printf("  Digite o numero de casas na vertical: ");
        scanf("%d", &Rainha);
        RainhaMoveH(Rainha);
        RainhaMoveV(Rainha);
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
