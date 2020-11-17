#include <stdio.h>
 
int main() {
 
    int i;
    float arr[100], x;

    for(i = 0; i <= 100-1; i++){
        scanf("%f", &x);
        arr[i] = x;
        if(x <= 10){

            printf("A[%d] = %.1f\n", i, arr[i]);
        }
    }
 
    return 0;
}