#include <stdio.h>

int main()
{

    int inputNum, input, i = 0, j = 0, per[5], imper[5], k;

    for (inputNum = 1; inputNum <= 15; inputNum++)
    {
        scanf("%d", &input);
        if (input % 2 == 0)
        {
            per[i] = input;
            i++;
        }
        else
        {
            imper[j] = input;
            j++;
        }

        if (i == 5)
        {
            for (k = 0; k < i; k++)
            {
                printf("par[%d] = %d\n", k, per[k]);
                per[k] = 0;
            }
            i = 0;
        }

        if (j == 5)
        {
            for (k = 0; k < j; k++)
            {
                printf("impar[%d] = %d\n", k, imper[k]);
                imper[k] = 0;
            }
            j = 0;
        }

        if (inputNum == 15)
        {
            for (k = 0; k < j; k++)
            {
                printf("impar[%d] = %d\n", k, imper[k]);
            }
            for (k = 0; k < i; k++)
            {
                printf("par[%d] = %d\n", k, per[k]);
            }
        }
    }

    return 0;
}