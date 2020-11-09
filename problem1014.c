#include <stdio.h>
 
int main() {
    int X;
    float Y, consumption;
    scanf("%d\n%f", &X, &Y);

    consumption = X / Y;

    printf("%.3f km/l\n", consumption);
 
    return 0;
}
