#include <stdio.h>
 
int main() {

    double salary, at3000, finalTax ,at4000, above4500;
    scanf("%lf",  &salary);

    if (salary <= 2000){
        finalTax = 0;
    }else if (salary > 2000 && salary <= 3000){
        at3000 = salary - 2000;
        finalTax = at3000 * 0.08;
    }else if (salary > 3000 && salary <= 4500){
        at4000 = salary - 3000;
        finalTax = (at4000 * 0.18) + (1000 * 0.08);
    }else if (salary > 4500){  
        above4500 = salary - 4500;
        finalTax = (above4500 * 0.28) + (1500 * 0.18) + (1000 * 0.08);
    }

    
    if(finalTax > 0){
        printf("R$ %.2lf\n", finalTax);
    }else{
        printf("Isento\n");
    }
    
    return 0;
}