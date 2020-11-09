#include <stdio.h>
 
int main() {
 
    char name[100];
    double SALARY, SOLD;
    scanf("%s %lf %lf", &name, &SALARY, &SOLD);
    double TOTAL = SALARY + (SOLD * 15 / 100);
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    // if(printf("Hello World!")){

    // }
 
    return 0;
}