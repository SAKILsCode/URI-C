#include <stdio.h>

int main()
{

    int x, y, odd = 0;
    scanf("%d\n%d", &x, &y);

    if (x == y)
    {
        printf("%d\n", odd);
    }
    else if (x < y)
    {

        for (x = x + 1; x < y; x++)
        {
            if (x % 2 == 1 || x % 2 == -1)
            {
                odd += x;
            }
        }
        printf("%d\n", odd);
    }
    else if (x > y)
    {

        for (y = y + 1; y < x; y++)
        {
            if (y % 2 == 1 || y % 2 == -1)
            {
                odd += y;
            }
        }
        printf("%d\n", odd);
    }

    return 0;
}
