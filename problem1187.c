#include <stdio.h>
 
int main() {
 
    double arr[12][12], sum = 0.0;
    char operation[2];
    int i, j, a, k, start = 1, end = 10;

    scanf("%s", &operation);
    for(i = 0; i <= 11; i++){
        for(j = 0; j <= 11; j++){
            scanf("%lf", &arr[i][j]);
        }
    }

    for(a = 0; a <= 4; a++){
        for(k = start; k <= end; k++){
            sum += arr[a][k];
        }
        start++;
        end--;
    }

    if(operation[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(operation[0]=='M'){
        sum=sum/30.0;
        printf("%.1lf\n", sum);
    }
 
    return 0;
}

