#include <stdio.h>

/* Excercise 1-14 Write a program to print a histogram of the lengths of words
in its input. It is easy to draw the histogram with the bars horizal; a 
vertical orientation is more challenging */

int main() {
    // we need to store the lengths in an array  from 0 to 20
    int length[20];
    int c,i,j,alength;
    
    //initialize variables
    alength = 0;
    for (i=1;i<21;++i){
        length[i] = 0;
    }
    
    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c=='\n'){
            ++length[alength];
            alength = 0;
        } else {
            ++alength;
        } 
    // We now make the histogram
    }
    for (i=1;i<21;++i){
        printf("%d\t|",i);
        for (j=0;j<length[i];++j){
            putchar('*'); 
        } 
        putchar('\n');
    } 
}
