#include <stdio.h>

int main()
{
    int i, j, start = 11;
    double arr[12][12], sum = 0.0, counter = 0;
    char indicator;

    scanf("%c", &indicator);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
            arr[i][j];
        }
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = start; j <= 11; j++)
        {
            sum += arr[i][j];
            counter++;
        }
        start--;
    }
    for (i = 6; i <= 10; i++)
    {
        start++;
        for (j = start; j <= 11; j++)
        {
            sum += arr[i][j];
            counter++;
        }
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