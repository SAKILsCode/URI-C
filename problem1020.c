#include <stdio.h>

int main() {
 
    int N, years, months, days, daysLeftX;
    scanf("%d", &N);

    years = N / 365;
    daysLeftX = (N - (years * 365));
    months = daysLeftX / 30;
    days = N - ((years * 365) + (months * 30));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
 
    return 0;
}