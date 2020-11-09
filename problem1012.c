#include <stdio.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double AORectangledTriangle = (A * C) / 2;
    double AORadiusCircle = 3.14159 * (C * C);
    double AOTrapezium = (C * (A + B)) / 2;
    double AOSquare = B * B;
    double AORectangle = A * B;


    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", AORectangledTriangle, AORadiusCircle, AOTrapezium, AOSquare, AORectangle);
 
    return 0;
}
