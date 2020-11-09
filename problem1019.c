#include <stdio.h>
 
int main() {
 
    int N, hours, min, sec;
    float x, y;
    scanf("%d", &N);

    // hours = N / 3600;
    // x = ((float)N / 3600) - hours;
    // min = x * 60;
    // y = (x * 60) - min;
    // sec = y * 60;


    hours = N / 3600;
    min = N % 3600 / 60;
    sec = N % 60;

    printf("%d:%d:%d\n", hours, min, sec);
 
    return 0;
}