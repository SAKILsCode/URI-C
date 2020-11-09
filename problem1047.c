#include <stdio.h>

int main()
{
    int h1, h2, m1, m2;
    int min = 0, hour = 0;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    hour = (h2 - h1);
    if(hour <= 0)
    {
        hour = 24 + (h2 - h1);
    }

    min = (m2 - m1);
    if(min <= 0)
    {
        min = 60 + (m2 - m1);
        hour--;
    }

    if(h1 == h2 && m1 == m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour, min);
    }

    return 0;
}