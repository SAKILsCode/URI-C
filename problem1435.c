#include <stdio.h>

int main() {

    int i, j, n, k, a, b;

    while(1){

        scanf("%d", &n);

        if(n == 0){
            break;
        }

        int arr[n][n];
        a = 0;
        b = n - 1;

        for(i = a; i <= b; i++){
            for(j = a; j <= b; j++){
                arr[i][j] = 1;
            }
        }
        int halfN = n/2;
        if(halfN%2==1){
            halfN++;
        }


        for(k = 1; k < halfN; k ++){
            for(i = i; i < j; i++){
                for(j = i; j < j; j++){
                    if(j == 0){
                        printf("%3d", arr[i][j]);
                    }else{
                        printf(" %3d", arr[i][j]);
                    }
                }
                printf("\n");
            }
        }


    }
 
    return 0;
}



////////Unsolved
