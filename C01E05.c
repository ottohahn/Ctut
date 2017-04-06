#include <stdio.h> 

/*
print Fahrenheit to Celsius table
for fahr = 300, ... , 0
using floating point arithmetic
*/

int main() {
    float fahr, celsius;
    int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;
	while (fahr >= lower) {
		celsius = (5.0 / 9.0) * (fahr-32.0) ;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}

return 0;
}
