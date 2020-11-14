  
#include <stdio.h>
 
int main() {
 
    int x, y, i, n;
    double z;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d%d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            z = x / (y*1.0);
            printf("%.1lf\n", z);
        }
    }
    return 0;
}

