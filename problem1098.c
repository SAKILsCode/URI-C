#include <stdio.h>

int main(){
    float a, b, c;
    int x;
    for (a = 0; a <= 1.9; a+=0.2){
        for (b = 1.0; b <= 3.0; b++){
            c = a+b;
            if(a == 0.0 || a == 1.0){
                printf("I=%.0f J=%.0f", a, c);
            }else if(c == 2.0 || c == 3.0 || c == 4.0 || c == 5.0){
                printf("I=%.0f J=%.0f", a, c);
            }else{
                printf("I=%.1f J=%.1f", a, c);
            }
            printf("\n");
        }
    }
    for(x = 3; x <= 5; x++){
        printf("I=2 J=%d\n", x);
    }

    return 0;
} 