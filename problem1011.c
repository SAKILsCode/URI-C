#include <stdio.h>
 
// int main() {
//     double R;
//     printf("Enter Value of Radius\n");
//     scanf("%lf", &R);
    
//     double sphere = (4.0 / 3) * 3.14159 * (R*R*R);

//     printf("VOLUME = %.3lf\n", sphere);

//     return 0;
// }


int main() {
    double R;
    scanf("%lf", &R);
    double sphere = (4.0 / 3) * 3.14159 * (R*R*R);

    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}