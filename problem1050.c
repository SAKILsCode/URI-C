#include <stdio.h>
// #include <stdbool.h>
 
int main() {
 
    int x;
    scanf("%d", &x);

    // int i = 0;
    // int ddd[10] = {61, 71, 11, 21, 32, 19, 27, 31};
    // char destination[10][20] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

    // while(true){
    //     if(x == ddd[i]){
    //         printf("%s\n", destination[i]);
    //         break;
    //     }
    //     i++;
    // }

    // if(x != ddd[0] && x != ddd[1] && x != ddd[2] && x != ddd[3] && x != ddd[4] && x != ddd[5] && x != ddd[6] && x != ddd[7]){
    //     printf("DDD nao cadastrado\n");
    // }

    // URI aren't accepting loops or array for that question.



    if(x == 61){
        printf("Brasilia\n");
    }
    else if(x == 71){
        printf("Salvador\n");
    }
    else if(x == 11){
        printf("Sao Paulo\n");
    }
    else if(x == 21){
        printf("Rio de Janeiro\n");
    }
    else if(x == 32){
        printf("Juiz de Fora\n");
    }
    else if(x == 19){
        printf("Campinas\n");
    }
    else if(x == 27){
        printf("Vitoria\n");
    }
    else if(x == 31){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }

    return 0;
}