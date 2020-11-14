
#include <stdio.h>
 
int main() {
 
    double x, sum, a;
    int option;

    while(1){
        sum = 0;
        a = 0;

        while(1){
            if(a == 2){
                break;
            }
            
            scanf("%lf", &x);
            if(x >= 0 && x <= 10){
                sum += x;
                a++;
            }else{
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n", sum / 2);
        printf("novo calculo (1-sim 2-nao)\n");

        while(1){
            scanf("%d", &option);
            if(option != 1 && option != 2){
                printf("novo calculo (1-sim 2-nao)\n");
            }else{
                break;
            }
        }
        if(option == 2){
            break;
        }
    }

    return 0;
}

