#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of 
one or more blanks by a single blank */
#define noblank '*'

int main() {
    int c, lastc;
    lastc = noblank;
    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            if (lastc != ' ') {
               putchar(c);
            }
        } else {
            putchar(c);
        }
    lastc = c;
    }
}
