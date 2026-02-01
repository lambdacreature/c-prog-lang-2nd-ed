#include <stdio.h>

/*
 * Muestra la sala' tabla de Fahrenheit a Celsius 
 * esta vez usa un bucle for para iterar
 *
 * mod: muestra la tabla en reversa, desde fahr = 300 hasta 0
 */

main() 
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}
