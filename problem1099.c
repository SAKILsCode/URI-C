#include <stdio.h>
 
int main() {
 
    int n, x, y, sum, i, j;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d%d", &x, &y);

        if(x == y){
            sum = 0;
            printf("%d\n", sum);
        } else if(x < y){
            for(j = x+1, sum = 0; j < y; j++){
                if(j % 2 == 1 || j % 2 == -1){
                    sum += j;
                }
            }
            printf("%d\n", sum);
        } else{
            for(j = y+1, sum = 0; j < x; j++){
                if(j % 2 == 1 || j % 2 == -1){
                    sum += j;
                }
            }
            printf("%d\n", sum);
        }
    }