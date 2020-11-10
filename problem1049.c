#include <stdio.h>
#include <string.h>
 
int main() {
 
    char x[30], y[30], z[30];
    scanf("%s\n%s\n%s", &x, &y, &z);

    char a1[] = "vertebrado", a2[] = "invertebrado";
    char b1[] = "ave", b2[] = "mamifero", b3[] = "inseto", b4[] = "anelideo";
    char c1[] = "carnivoro", c2[] = "onivoro", c3[] = "onivoro", c4[] = "herbivoro", c5[] = "hematofago", c6[] = "herbivoro", c7[] = "hematofago", c8[] = "onivoro";

    if(0 == strcmp(x, a1)){
        if(0 == strcmp(y, b1)){
            if(0 == strcmp(z, c1)){
                printf("aguia\n");
            }else if(0 == strcmp(z, c2)){
                printf("pomba\n");
            }
        }else if(0 == strcmp(y, b2)){
            if(0 == strcmp(z, c3)){
                printf("homem\n");
            }else if(0 == strcmp(z, c4)){
                printf("vaca\n");
            }
        }
    }else if(0 == strcmp(x, a2)){
        if(0 == strcmp(y, b3)){
            if(0 == strcmp(z, c5)){
                printf("pulga\n");
            }else if(0 == strcmp(z, c6)){
                printf("lagarta\n");
            }
        }else if(0 == strcmp(y, b4)){
            if(0 == strcmp(z, c7)){
                printf("sanguessuga\n");
            }else if(0 == strcmp(z, c8)){
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}