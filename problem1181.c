#include <stdio.h>

int main()
{
    int i, j, line;
    float arr[12][12], sum = 0;
    char indicator;

    scanf("%d %c", &line, &indicator);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }

    for (j = 0; j < 12; j++)
    {
        sum += arr[line][j];
    }

    if (indicator == 'S')
    {
        printf("%.1f\n", sum);
    }
    if (indicator == 'M')
    {
        printf("%.1f\n", sum / 12.0);
    }

    return 0;
}