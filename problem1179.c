#include <stdio.h>

int main()
{
    int i, j=0, k=0, even[5], odd[5], x, m;
    for(i = 0; i < 15; i++){
        scanf("%d", &x);
        if(x % 2 == 0){
            even[j]=x;
            j++;
            if(j == 5){
                for(m = 0; m < 5; m++){
                    printf("par[%d] = %d\n", m, even[m]);
                    even[m]=0;
                    j=0;
                }
            }
        }else{
            odd[k]=x;
            k++;
            if(k == 5){
                for(m = 0; m < 5; m++){
                    printf("impar[%d] = %d\n", m, odd[m]);
                    odd[m]=0;
                    k=0;
                }
            }
        }
    }

    for(i = 0; i < 5; i++){
        if(odd[i] == 0)break;
        printf("impar[%d] = %d\n", i, odd[i]);
    }

    for(i = 0; i < 5; i++){
        if(even[i] == 0)break;
        printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}



/////////////////////////////////////////////////////////////////////////////




// 1            par[0] = 4
// 3            par[1] = -4
// 4            par[2] = 2
// -4            par[3] = 8
// 2            par[4] = 2
// 3            impar[0] = 1
// 8            impar[1] = 3
// 2            impar[2] = 3
// 5            impar[3] = 5
// -7            impar[4] = -7
// 54            impar[0] = 789
// 76            impar[1] = 23
// 789            par[0] = 54
// 23            par[1] = 76
// 98            par[2] = 98

