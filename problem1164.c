#include <stdio.h>
 
int main() {

    int n, i, x, j, sum = 0;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = 0;
        scanf("%d", &x);
        for(j = 1; j < x; j++){
            if(x % j == 0){
                sum += j;
            }
        }
        if(sum == x){
            printf("%d eh perfeito\n", x);
        }else{
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}