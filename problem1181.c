#include <stdio.h>
 
int main() {
 
    int i, j, row;
    float arr[12][12], sum = 0, x;
    char operation;

    scanf("%d %c", &row, &operation);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &arr[i][j]);
            if(i == row){
                sum = sum + arr[i][j];
            }
        }
    }

    if(operation == 'S'){
        printf("%.1f\n", sum);
    }
    else{
        printf("%.1f\n", (float)sum/12.0);
    }
 
    return 0;
}


