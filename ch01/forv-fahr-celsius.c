#include <stdio.h>

/*
 * Muestra la sala' tabla de Fahrenheit a Celsius 
 * esta vez usa un bucle for para iterar
 *
 */

main() 
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}
