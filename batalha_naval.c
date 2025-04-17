#include <stdio.h>
#include <locale.h>
int main()
{
    int i;
    int j;
    int barcos = 3;
    int found = 0;
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 3, 0},
        {1, 1, 1, 3, 0, 0, 0, 0, 3, 0},
        {0, 1, 3, 0, 0, 0, 0, 1, 3, 0},
        {0, 3, 0, 0, 1, 0, 1, 1, 1, 1},
        {0, 0, 0, 1, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    printf(" Tabuleiro:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    
    printf("Navio 1: linha 2 até 4 (vertical) e linha 9 (horizontal)\n");
    printf("Navio 2: linha 9 (vertical) 2 até 4 (horizontal)\n");
    printf("Navio 3: linha 3 até 5 (vertical)\n");
    printf("Navio 4: linha 7 até 9 (vertical)\n");
    return 0;
}
