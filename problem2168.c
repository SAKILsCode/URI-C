#include <stdio.h>

int main()
{
    int block, i, j, a, b, count = 0;

    scanf("%d", &block);
    int arr[block + 1][block + 1];

    for (i = 0; i <= block; i++)
    {
        for (j = 0; j <= block; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < block; i++)
    {
        for (j = 0; j < block; j++)
        {
            if ((arr[i][j] == 1 && arr[i][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j] == 1 ||
            arr[i][j + 1] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i][j + 1] == 1)
            &&
            (arr[i][j] == 1 && arr[i][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j] == 1 ||
            arr[i][j + 1] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i][j + 1] == 1)
            &&
            (arr[i][j] == 1 && arr[i][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j] == 1 ||
            arr[i][j + 1] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i][j] == 1 && arr[i + 1][j + 1] == 1 ||
            arr[i + 1][j] == 1 && arr[i][j + 1] == 1))
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}