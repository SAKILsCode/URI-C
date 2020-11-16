#include <stdio.h>
 
int main() {

    int t, pa, pb, i, years=0;
    double  g1, g2, one, two;

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        years = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa <= pb){

            pa += ((pa * g1)/100);
            pb += ((pb * g2)/100);

            years ++;
            if(years > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(years <= 100){
            printf("%d anos.\n", years);
        }
    }
    return 0;
}