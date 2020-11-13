#include <stdio.h>
 
int main() {
 
    int i, n, tc = 0, tr = 0, ts = 0;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        int num;
        char ch;
        scanf("%d %c", &num, &ch);
        if(ch == 'C'){
            tc += num;
        }
        if(ch == 'R'){
            tr += num;
        }
        if(ch == 'S'){
            ts += num;
        }
    }


    float total = (tc + tr + ts);

    float ptc = (tc * 100)/total;
    float ptr = (tr * 100)/total;
    float pts = (ts * 100)/total;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", (tc+tr+ts), tc, tr, ts, ptc, ptr, pts);
 
    return 0;
}