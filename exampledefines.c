#include <stdio.h> 

#define LOWER 0 /* lower limit of table */ 
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/*
print Fahrenheit to Celsius table
for fahr = 300, ... , 0
using floating point arithmetic
*/

int main() {
    float fahr, celsius;
    fahr = UPPER;
    while (fahr >= LOWER) {
        celsius = (5.0 / 9.0) * (fahr-32.0) ;
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr - STEP;
	}
return 0;
}
