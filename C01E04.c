#include <stdio.h> 

/*
print Fahrenheit to Celsius table
for fahr = 0, 20, ... , 300
using floating point arithmetic
*/

int main() {
    float fahr, celsius;
    int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0 * celsius) / 5.0) + (32.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

return 0;
}
