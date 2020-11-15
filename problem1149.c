#include <stdio.h>

int main()
{

    int a, n, i, x = 0;

    scanf("%d%d", &a, &n);

    while(n <= 0){
        scanf("%d", &n);
    }
    for(i = 1; i <= n; i++){
        x += a;
        a++;
    }
    printf("%d\n", x);
    return 0;
}

