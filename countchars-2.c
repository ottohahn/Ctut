#include <stdio.h>

/* Counting characters, 2nd version using double and for */

int main() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc){
        ;
    }
    printf("%.0f\n", nc);
}
