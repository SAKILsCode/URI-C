#include <stdio.h>

// float sum(int unit, float price){
//     return unit * price;
// }
 
// int main() {
 
//     int code1, code2, unit1, unit2;
//     float price1, price2;

//     printf("Enter Product Code, Unit and Price of two product\n");
//     scanf("%d %d %f\n%d %d %f", &code1, &unit1, &price1, &code2, &unit2, &price2);

//     float summetion1 = sum(unit1, price1);
//     float summetion2 = sum(unit2, price2);
//     float summetion = summetion1 + summetion2;

//     printf("VALOR A PAGAR: R$ %.2f\n", summetion);
 
//     return 0;
// }


//OR


int main() {
 
    int code1, code2, unit1, unit2;
    float price1, price2;
    scanf("%d %d %f\n%d %d %f", &code1, &unit1, &price1, &code2, &unit2, &price2);

    float sum1 = unit1 * price1;
    float sum2 = unit2 * price2;
    float total = sum1 + sum2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}