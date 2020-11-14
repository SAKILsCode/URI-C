#include <stdio.h>
 
int main() {
 
    float x, sum = 0, a=0;

    while(1){
        scanf("%f", &x);
        if(x < 0 || x > 10){
            printf("nota invalida\n");
        }else{
            sum += x;
            a++;
        }
        if(a == 2){
            printf("media = %.2f\n", sum / 2.00);
            break;
        }
    }
    return 0;
}