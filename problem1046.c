#include <stdio.h>
 
int main() {
 
    int a, b, res;
    scanf("%d %d", &a, &b);

    res = 24 - a + b;

    if(res > 24){
        res = res - 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", res);
 
    return 0;
}