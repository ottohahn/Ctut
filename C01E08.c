#include <stdio.h>

/* Write a program to count blanks, tabs and newlines */

int main(){
    int c, nl, tb, bl;
    nl = 0;
    tb = 0;
    bl = 0;
    while((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
        if (c == ' '){
            ++bl;
        }
        if (c == '\t'){
            ++tb;
        }
    }
    printf("newlines: %d\n", nl);
    printf("blanks: %d\n", bl);
    printf("tabs: %d\n", tb);
}
