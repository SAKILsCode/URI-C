#include <stdio.h>

int main(){
    int i, j, k=7;
    for (i = 1; i <= 9; i+=2){
        for (j = k; j >= k-2; j--){
            printf("I=%d J=%d\n", i, j);
        }
        k+=2;
    }

    return 0;
}