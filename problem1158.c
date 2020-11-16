#include <stdio.h>
 
int main() {
 
    int n, i, x, y, j, sum;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        if(x % 2 == 1){
            sum = 0;
            for(j = 1; j <= y; j++){
                sum += x;
                x+=2;
            }
        }else{
            sum = 0;
            x++;
            for(j = 1; j <= y; j++){
                sum += x;
                x+=2;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}