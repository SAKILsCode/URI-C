#include <stdio.h>
 
int main() {
 
    int x, i;
    float av, a = 0, sum = 0;


    while(1){
        scanf("%d", &x);
        if(x <= 0){
            break;
        }
        a++;
        sum += x;

    }
    av = sum / a;
    printf("%.2f\n", av);
 
    return 0;
}