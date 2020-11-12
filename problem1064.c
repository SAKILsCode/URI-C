#include <stdio.h>
 
int main() {

    float x[5];
    float sum, average;
    int i, count = 0;

    for(i = 0; i <= 5; i++){
        scanf("%f", &x[i]);
        
        if (x[i] > 0){
            count += 1;

            sum += x[i];
        }
        
    }
    average = sum / count;

    printf("%d valores positivos\n%.1f\n", count, average);
 
    return 0;
}