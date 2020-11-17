#include <stdio.h>
 
int main() {
 
    int arr[20], x, i, j;

    for(i = 0; i < 20; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = 19; i < 10; i++, j--){
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }
 
    return 0;
}