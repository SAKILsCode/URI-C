#include <stdio.h>
 
int main() {
 
    int i, x, n;

    int in = 0, out = 0;

    scanf("%d", &x);
    for (i = 0; i < x; i++){
        scanf("%d", &n);
        if(n >= 10 && n <= 20){
            in += 1;
        }else{
            out += 1;
        }
    }

    printf("%d in\n%d out\n", in, out);
    
 
    return 0;
}