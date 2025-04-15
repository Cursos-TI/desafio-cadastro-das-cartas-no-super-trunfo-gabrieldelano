#include <stdio.h>
#include <locale.h>
int main()
{
    int i;
    int j;
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 3, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    printf(" Tabuleiro:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    printf("Navio 1: linha 9 (horizontal) e linha 2 a 4 (vertical)\n");
    printf("Navio 2: linha 9 (vertical) e linha 9 (horizontal)\n");
    return 0;
}
