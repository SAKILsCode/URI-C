#include <stdio.h>

int main()
{
    int input, i, j, a, halfOfInput, assignedRow, assignedCol;
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

            int firstNumber = 0;
            int firstNumber2 = 0;

            for (a = 1; a <= input; a++)
            {
                assignedRow = 1;
                for (i = firstNumber; i < input; i++)
                {
                    for (j = firstNumber; j < i; j++)
                    {
                        arr[i][j] = assignedRow;
                    }
                    assignedRow++;
                }
                firstNumber++;


                for (i = firstNumber2; i < input; i++)
                {
                    assignedCol = 1;
                    for (j = i; j < input; j++)
                    {
                        arr[i][j] = assignedCol;

                        assignedCol++;
                    }
                }
                firstNumber2++;
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