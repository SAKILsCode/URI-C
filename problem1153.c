#include <stdio.h>
 
int main() {
    int x, i, fact = 1;
    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        
        fact *= i;
    }
    printf("%d\n", fact);
    return 0;
}