#include <stdio.h>
 
int main() {
 
    int RS100, RS50, RS20, RS10, RS5, RS2, RS1, RS050, RS025, RS010, RS005, RS001, n;
    double N;
    scanf("%lf", &N);

    n = N * 100;

    // Notes
    RS100 = n / 10000;
    n = n % 10000;

    RS50 = n / 5000;
    n = n % 5000;

    RS20 = n / 2000;
    n = n % 2000;

    RS10 = n / 1000;
    n = n % 1000;

    RS5 = n / 500;
    n = n % 500;

    RS2 = n / 200;
    n = n % 200;

    // Coins
    RS1 = n / 100;
    n = n % 100;
    
    RS050 = n / 50;
    n = n % 50;
    
    RS025 = n / 25;
    n = n % 25;

    RS010 = n / 10;
    n = n % 10;

    RS005 = n / 5;
    n = n % 5;

    RS001 = n;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", RS100, RS50, RS20, RS10, RS5, RS2, RS1, RS050, RS025, RS010, RS005, RS001);
 
    return 0;
}
