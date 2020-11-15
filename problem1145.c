#include <stdio.h>
 
int main() {
    
    int x, y, i, j, k = 0;
    scanf("%d %d", &x, &y);
    if(x<100000 && x>1 && x<20 && x<y){
        while(1){

            if(k == y){
                break;
            }
  
            for(j = 1; j <= x; j++){
                k++;
                if(j == x){
                    printf("%d", k);
                }else{
                    printf("%d ", k);
                }
            }
            printf("\n");

        }
    }
 
    return 0;
}
