#include <stdio.h>
 
int main() {
    
    int n, i, j, a=0, b=0, c=0;
    scanf("%d", &n);
    for(i = 1, j = 1; i <= n; i++){
        
        a = j;
        b = j+1;
        c = j+2;

        printf("%d %d %d PUM\n", a, b, c);
        j+=4;
    }
 
    return 0;
}