#include <stdio.h>

int main()
{
    int i, j, start = 5, end = 6;
    double arr[12][12], sum = 0.0, counter = 0;
    char indicator;

    scanf("%c", &indicator);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }

    for (i = 7; i <= 11; i++)
    {
        for (j = start; j <= end; j++)
        {
            sum += arr[i][j];
            counter++;
        }
        start--;
        end++;
    }

    if (indicator == 'S')
    {
        printf("%.1lf\n", sum);
    }
    if (indicator == 'M')
    {
        printf("%.1lf\n", sum / counter);
    }

    return 0;
}