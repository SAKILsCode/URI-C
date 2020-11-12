#include <stdio.h>
 
int main() {
 
    int n, i;
    float x, y, z, wx, wy, wz, w;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%f %f %f", &x, &y, &z);
        wx = x*2;
        wy = y*3;
        wz = z*5;
        w = wx + wy + wz;
        printf("%.1f\n", w / (2+3+5));
    }
 
    return 0;
}