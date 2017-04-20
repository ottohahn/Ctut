#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of 

*/
int main() {
    int c;
    while ((c=getchar()) != EOF) {
        if (c == '\t') {
               putchar('\\');
               putchar('t');
            }
        if (c == '\b') {
               putchar('\\');
               putchar('b');

            }
        if (c == '\\') {
               putchar('\\');
               putchar('\\');
            }
        if ((c != '\t') && (c != '\b') && (c != '\\')) {
            putchar(c);
            }
        } 
}
