#include <stdio.h>
 
int main() {
 
    int NUMBER, WH;
    float RPH;
    scanf("%d %d %f", &NUMBER, &WH, &RPH);
    float SALARY = WH * RPH;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}