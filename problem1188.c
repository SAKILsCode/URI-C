#include <stdio.h>
 
int main() {
 
    double arr[12][12], sum = 0.0, av;
    char operation[2];
    int i, j, a, k, start = 5, end = 6;

    scanf("%s", &operation);
    for(i = 0; i <= 11; i++){
        for(j = 0; j <= 11; j++){
            scanf("%lf", &arr[i][j]);
        }
    }

    for(a = 7; a <= 11; a++){
        for(k = start; k <= end; k++){
            sum += arr[a][k];
        }
        start--;
        end++;
    }

    if(operation[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(operation[0]=='M'){
        av=sum/30.0;
        printf("%.1lf\n", av);
    }
 
    return 0;
}

