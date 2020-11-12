#include <stdio.h>
 
int main() {
 
    int n, i, big = 0, ref, position;
    for (i = 1; i <= 100; i++){
        scanf("%d", &n);
        ref = n;
        if(ref > big){
            big = ref;
            position = i;
        }
        
    }
    printf("%d\n", big);
    printf("%d\n", position);
 
    return 0;
}