#include <stdio.h>
 
int main() {
    int i, x, z, r = 0, count = 0;
    scanf("%d%d", &x, &z);

    while(z <= x){
        scanf("%d", &z);
    }
    for(i = x; i <= z; i++){
        r += i;
        count += 1;
        if(r >= z){
            break;
        }
    }
    printf("%d\n", count);
 
    return 0;
}