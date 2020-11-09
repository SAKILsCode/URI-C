#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, x, x1, x2, x3, x4, y, examAv, weightedAv, exmScore;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    x1 = n1 * 2;
    x2 = n2 * 3;
    x3 = n3 * 4;
    x4 = n4 * 1;

    x = x1 + x2 + x3 + x4;
    y = 2 + 3 + 4 + 1;

    weightedAv = ((x + y) / y) - 1;

    printf("Media: %.1f\n", weightedAv);
    if(weightedAv >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(weightedAv < 5.0){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%f", &exmScore);
        printf("Nota do exame: %.1f\n", exmScore);
        examAv = (weightedAv + exmScore) / 2;
        if(examAv >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Reproved student\n");
        }
        printf("Media final: %.1f\n", examAv);

    }

    return 0;
}