#include <stdio.h>
 
int main() {
 
    long long int arr[61];
    arr[0] = 0, arr[1] = 1;
    int i, x, y;

    for(i = 2; i < 61; i++){
        arr[i] = arr[i-1] + arr[i-2];
        // printf("Fib(%d) = %d\n", i, arr[i]);
    }
    scanf("%d", &x);
    for(i = 0; i < x; i++){
        scanf("%d", &y);

        printf("Fib(%d) = %lld\n", y, arr[y]);
    }
 
    return 0;
}
