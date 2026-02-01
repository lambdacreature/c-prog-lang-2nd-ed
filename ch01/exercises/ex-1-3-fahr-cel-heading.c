#include<stdio.h>

/*
 * Muestra un encabezamiento antes de la tabla
 * de Fahrenheit a Celsius, far = 0.0 hasta 300.0
 *
 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step  = 20.0;

	printf("Fahr Celsius\n");
	/*      \  / \     /
	 *       \/   \   /
	 *        4    \ /
	 *              7
	 */ 

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %7.1f\n", fahr, celsius);

		fahr = fahr + step;
	}
}
