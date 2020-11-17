#include <stdio.h>
 
int main() {
 
    int arr[10];
    int i, x;

    scanf("%d", &x);
    for(i = 0; i <= 10-1; i++){
        arr[i] = x;
        printf("N[%d] = %d\n", i, arr[i]);
        x*=2;
    }
 
    return 0;
}