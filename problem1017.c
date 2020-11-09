#include <stdio.h>
 
int main() {
 
    int time, speed;
    scanf("%d %d", &time, &speed);

    int dist = time * speed;
    float totalLiters = (float)dist / 12;

    printf("%.3f\n", totalLiters);
 
    return 0;
}
