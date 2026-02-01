#include <stdio.h>

/*
 * Muestra la tabla de Fahrenheit a Celsius 
 * para fahr = 0, 20, 40, ..., 300; usando fp ahora
 *
 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
