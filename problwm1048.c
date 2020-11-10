#include <stdio.h>
 
int main() {
 
    float currSalary, newSalary, increse;
    int parcentage;
    scanf("%f", &currSalary);

    if(currSalary >= 0 && currSalary <= 400){
        parcentage = 15;
        increse = currSalary * ((float)parcentage / 100);
        newSalary = currSalary + increse;
    }else if(currSalary > 400 && currSalary <= 800){
        parcentage = 12;
        increse = currSalary * ((float)parcentage / 100);
        newSalary = currSalary + increse;
    }else if(currSalary > 800 && currSalary <= 1200){
        parcentage = 10;
        increse = currSalary * ((float)parcentage / 100);
        newSalary = currSalary + increse;
    }else if(currSalary > 1200 && currSalary <= 2000){
        parcentage = 7;
        increse = currSalary * ((float)parcentage / 100);
        newSalary = currSalary + increse;
    }else if(currSalary > 2000){
        parcentage = 4;
        increse = currSalary * ((float)parcentage / 100);
        newSalary = currSalary + increse;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", newSalary, increse, parcentage);
 
    return 0;
}