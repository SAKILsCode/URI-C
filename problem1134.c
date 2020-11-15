#include <stdio.h>
 
int main() {
 
    int x, alc = 0, gas = 0, die = 0;

    printf("MUITO OBRIGADO\n");
    while(1){
        scanf("%d", &x);
        if(x == 4){
            break;
        }else{
            if(x >= 1 && x <= 4){
                if (x == 1){
                    alc++;
                }
                else if (x == 2){
                    gas++;
                }
                else if (x == 3){
                    die++;
                }
            }else{
                continue;
            }
        }
    }

    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);


    return 0;
}



