#include <stdio.h>

/*
 * Muestra la tabla inversa, Celsius a Fahrenheit 
 * celsius = 0.0 hasta 300.0
 *
 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

		
	lower =   0.0; /* -17.8;      */
	upper = 300.0; /* 148.9;      */
	step  =  20.0; /* 15.6 - 4.4; */

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);

		celsius = celsius + step;
	}
}

