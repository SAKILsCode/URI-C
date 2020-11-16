#include <stdio.h>
 
int main() {
 
    int i, x, j, sum;
    while(1){
        scanf("%d", &x);

        if(x == 0){
            break;
        }
        else if(x % 2 == 0){
            sum = 0;
            for(i = 1; i <= 5; i++){
                sum += x;
                x+=2;
            }
            printf("%d\n", sum);
        }
        else{
            x++;
            sum = 0;
            for(i = 1; i <= 5; i++){
                sum += x;
                x+=2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}