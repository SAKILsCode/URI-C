#include <stdio.h>

int main()
{
    int input, i, j, a, halfOfInput, firstNumber, lastNumber;
    while (1)
    {
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }
        else
        {
            int arr[input][input];

            halfOfInput = input / 2;
            if (input % 2 == 1)
            {
                halfOfInput++;
            }

            firstNumber = 0;
            lastNumber = input - 1;

            for (a = 1; a <= halfOfInput; a++)
            {
                for (i = firstNumber; i <= lastNumber; i++)
                {
                    for (j = firstNumber; j <= lastNumber; j++)
                    {
                        arr[i][j] = a;
                    }
                }
                firstNumber++;
                lastNumber--;
            }

            for (i = 0; i < input; i++)
            {
                for (j = 0; j < input; j++)
                {
                    if (j == 0)
                    {
                        printf("%3d", arr[i][j]);
                    }
                    else
                    {
                        printf(" %3d", arr[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}