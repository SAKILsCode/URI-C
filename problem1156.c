#include <stdio.h>

int main() {

    float s = 0, a = 1, dv;
    int i = 1;

    for(i = 1; i <= 39; i+=2){
        dv = i / a;
        s += dv;
        a *= 2;
    }
    printf("%.2f\n", s); 
    return 0;
}