#include <stdio.h>
 
int main() {
 
    int x, y, i, n = 0;
    scanf("%d%d", &x, &y);

    if(x < y){
            for(i = x; i <= y; i++){
            if(i % 13 != 0){
                
                n += i;
            }
        }
    }else if(x > y){
            for(i = y; i <= x; i++){
            if(i % 13 != 0){
                
                n += i;
            }
        }
    }
    printf("%d\n", n);

 
    return 0;
}
