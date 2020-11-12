#include <stdio.h>
 
int main() {

    float x[5];
    float sum, average;
    scanf("%f\n%f\n%f\n%f\n%f\n%f", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5]);
    int i, count = 0;

    for(i = 0; i <= 5; i++){
        
        if (x[i] > 0){
            count += 1;

            sum += x[i];
        }
        
    }
    average = sum / count;

    printf("%d valores positivos\n%.1f\n", count, average);
 
    return 0;
}