#include <stdio.h>
 
int main() {
 
    int m, n;

    while(1){
        scanf("%d %d", &m, &n);
        if(m == n){
            break;
        }else{
            if(m < n){
                printf("Crescente\n");
            } else if (n < m){
                printf("Decrescente\n");
            }
        }
    }
    return 0;
}