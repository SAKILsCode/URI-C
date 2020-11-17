#include <stdio.h>
 
int main() {
 
    int arr[1000];
    int i, x, y;

    scanf("%d", &x);
    for(i = 0, y = 0; i < 1000; i++){

        printf("N[%d] = %d\n", i, y);

        y++;

        if(y == x){
            y = 0;
        }
    }
 
    return 0;
}
