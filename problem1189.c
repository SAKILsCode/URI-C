#include <stdio.h>
 
int main() {
 
    double arr[12][12], sum = 0.0, av;
    char operation[2];
    int i, j, a, k, first = 0, second = 4;

    scanf("%s", &operation);
    for(i = 0; i <= 11; i++){
        for(j = 0; j <= 11; j++){
            scanf("%lf", &arr[i][j]);
        }
    }

    for(a = 1; a <= 10; a++){
        if(a <= 5){
            for(k = 0; k <= first; k++){ 
                sum += arr[a][k];
            }
            first++;
        }
        else if(a >= 6){
            for(k = 0; k <= second; k++){ 
                sum += arr[a][k];
            }
            second--;
        }
    }

    if(operation[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else if(operation[0]=='M'){
        
        printf("%.1lf\n", av=sum/30.0);
    }
 
    return 0;
}

