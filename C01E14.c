#include <stdio.h>

/* Exercise 1-14 Write a program to print a histogram of the frequencies of
different characters in its input. */

#define NUMCHARS 256

int main() {
    // we need to store the lengths in an array  from 0 to 
    int length[NUMCHARS+1];
    int c,i,j,alength;
    
    //initialize variables
    alength = 0;
    for (i=1;i<NUMCHARS+1;++i){
        length[i] = 0;
    }
    
    while ((c=getchar()) != EOF) {
            ++length[c];
        } 
    // We now make the histogram
    for (i=1;i<NUMCHARS+1;++i){
        printf("%d\t|",i);
        for (j=0;j<length[i];++j){
            putchar('*'); 
        } 
        putchar('\n');
    } 
}
