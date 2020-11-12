#include <stdio.h>
 
int main() {

    int i, x;
    scanf("%d", &x);
    int y = x + 11;
    for(i = x; i <= y; i++){

        if (i % 2 == 1){
            printf("%d\n", i);
        }
        
    }
    return 0;
}