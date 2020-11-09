#include <stdio.h>

int main()
{

    int a, b, c, big, medium, small;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b & a >= c)
    {
        big = a;
        if (b > c)
        {
            medium = b;
            small = c;
        }
        else if (c > b)
        {
            medium = c;
            small = b;
        }
    }
    else if (b >= a & b >= c)
    {
        big = b;
        if (a > c)
        {
            medium = a;
            small = c;
        }
        else if (c > a)
        {
            medium = c;
            small = a;
        }
    }
    else if (c >= b & c >= a)
    {
        big = c;
        if (a > b)
        {
            medium = a;
            small = b;
        }
        else if (b > a)
        {
            medium = b;
            small = a;
        }
    }

    printf("%d\n%d\n%d\n", small, medium, big);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}