#include <stdio.h>

/* Program that prints one word of the input per line */

#define IN 1
#define OUT 0

int main() {                                                                    
    int c, state;                                                   
    state = OUT;                                                                
    while ((c = getchar()) != EOF) {                                            
        if (c == ' ' || c == '\t' || c == '\n') {                               
           state = OUT;
           putchar('\n');          
        } else {                                              
          state = IN;                                                         
          putchar(c);                                                          
        }                                                                       
    }                                                                           
}                
