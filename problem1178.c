#include <stdio.h>
 
int main() {
 
    double arr[1000], x;
    int i;

    scanf("%lf", &x);
    for(i = 0; i < 100; i++){

        arr[i] = x;

        printf("N[%d] = %.4lf\n", i, arr[i]);
        x/=2;

    }
 
    return 0;
}
