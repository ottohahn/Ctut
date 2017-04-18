#include <stdio.h>

/* Program that prints the value of the expression getchar() != EOF
   while reading input from a file 
 */

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%3d\n",(getchar() != EOF));
    }
}
