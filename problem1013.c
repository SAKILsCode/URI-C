#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int A, B, C, D, MaiorAB;
    scanf("%d %d %d", &A, &B, &C);


    D = (A + B + abs(A - B)) / 2;
    MaiorAB = (C + D + abs(C - D)) / 2;

    printf("%d eh o maior\n", MaiorAB);

    return 0;
}