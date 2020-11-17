#include <stdio.h>
 
int main() {
 
    int arr[10];
    int i, x;

    for(i = 0; i <= 10-1; i++){
        scanf("%d", &x);

        if(x <= 0){
            x = 1;
        }

        arr[i] = x;
        printf("X[%d] = %d\n", i, arr[i]);
    }
 
    return 0;
}