#include <stdio.h>
 
int main() {

    int x;
    int i, count = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d", &x);
        
        if (x % 2 == 0){
            count += 1;
        }
        
    }

    printf("%d valores pares\n", count);
 
    return 0;
}