#include <stdio.h>
 
int main() {
 
    int x, y, repeat, g = 0, a = 0, b = 0, c = 0;

    while(1){

        scanf("%d%d", &x, &y);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repeat);
        if(x > y){
            a++;
        }else if(y >  x){
            b++;
        }else if(x == y){
            c++;
        }

        if(repeat == 1){
            g+=1;
        }
        if(repeat == 2){
            g+=1;
            break;
        }
    }
    printf("%d grenais\n", g);
    printf("Inter:%d\n", a);
    printf("Gremio:%d\n", b);
    printf("Empates:%d\n", c);
    if(a > b){
        printf("Inter venceu mais\n");
    }else if(b > a){
        printf("Gremio venceu mais\n");
    }
 
    return 0;
}
