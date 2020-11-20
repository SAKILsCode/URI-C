#include <stdio.h>

int main()
{
    int smallest, i, n, index;

    scanf("%d", &n);

    if(n > 1 && n < 1000){
        int arr[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d ", &arr[i]);
        }
        smallest = arr[0];

        for (i = 0; i < n; i++)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
                index = i;
            }
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", smallest, index);

    return 0;
}