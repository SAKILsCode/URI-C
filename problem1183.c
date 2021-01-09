#include <stdio.h>

int main()
{
    int i, j, counter;
    float arr[12][12], sum = 0.0;
    char indicator;

    scanf("%c", &indicator);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }


    for (i = 0; i < 11; i++)
    {
        for (j = i+1; j < 12; j++)
        {
            sum += arr[i][j];
            counter++;
        }
    }

    if (indicator == 'S')
    {
        printf("%.1f\n", sum);
    }
    if (indicator == 'M')
    {
        printf("%.1f\n", sum / counter);
    }

    return 0;
}