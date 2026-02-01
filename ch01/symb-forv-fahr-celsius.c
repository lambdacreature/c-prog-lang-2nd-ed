#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20


/*
 * Muestra la sala' tabla de Fahrenheit a Celsius 
 * esta vez usa un bucle for para iterar y constantes
 * simbolicas para ayudar con la legibilidad del programa
 */

main() 
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}
