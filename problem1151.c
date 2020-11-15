#include <stdio.h>
 
int main() {
    int x, i;
    scanf("%d", &x);
    int arr[x];
    arr[0] = 0;
    arr[1] = 1;

    for(i = 0; i < x; i++){
        arr[i+2] = arr[i] + arr[i+1];
        if(i == (x-1)){
            printf("%d", arr[i]);
        }else{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}