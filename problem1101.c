#include <stdio.h>
 
int main() {
 
    int m, n, i, sum;

    while(1){
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0){
            break;
        }else{
            sum = 0;
            if(m < n){
                for(i = m; i <= n; i++){
                    sum += i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
            } else if (n < m){
                for(i = n; i <= m; i++){
                    sum += i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
            }
        }
    }
    return 0;
}