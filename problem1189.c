#include <stdio.h>

int main()
{
    int i, j, end = 4;
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

    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j <= i-1; j++)
        {
            sum += arr[i][j];
            counter++;
        }
    }
    for (i = 6; i <= 10; i++)
    {
        for (j = 0; j <= end; j++)
        {
            sum += arr[i][j];
            counter++;
        }
        end--;
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