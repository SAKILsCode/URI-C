#include <stdio.h>
 
int main() {
 
    float a, b, c, perimeter, areaTr;
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){
        perimeter = a + b + c;
        printf("Perimetro = %.1f\n", perimeter);
    }else{
        areaTr = ((a + b) * c) / 2;
        printf("Area = %.1f\n", areaTr);
    }
 
    return 0;
}