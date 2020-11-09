#include <stdio.h>
 
int main() {
 
    float productArr[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int x, y, code;
    scanf("%d %d", &x, &y);

    code = x-1;
    float total = (float)(productArr[code] * y);


    printf("Total: R$ %.2f\n", total);

    return 0;
}