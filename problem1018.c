#include <stdio.h>
 
int main() {
 
    int N, RS100, RS50, RS20, RS10, RS5, RS2, RS1;
    scanf("%d", &N);

    RS100 = N / 100;
    RS50 = (N - (100 * RS100)) / 50;
    RS20 = (N - ((50 * RS50) + (100 * RS100))) / 20;
    RS10 = (N - ((20 * RS20) + (50 * RS50) + (100 * RS100))) / 10;
    RS5 = (N - ((10 * RS10) + (20 * RS20) + (50 * RS50) + (100 * RS100))) / 5;
    RS2 = (N - ((5 * RS5) + (10 * RS10) + (20 * RS20) + (50 * RS50) + (100 * RS100))) / 2;
    RS1 = (N - ((2 * RS2) + (5 * RS5) + (10 * RS10) + (20 * RS20) + (50 * RS50) + (100 * RS100))) / 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, RS100, RS50, RS20, RS10, RS5, RS2, RS1);
 
    return 0;
}
