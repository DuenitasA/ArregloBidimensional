#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    int a=0, b=0;
    printf("Ingrese la cantidad de filas.\n");
    scanf("%d", &a);
    printf("Ingrese la cantidad de columnas.\n");
    scanf("%d", &b);
    int matriz[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matriz[i][j] = 0;

            if (i == j)
            {
                matriz[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
