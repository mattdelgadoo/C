#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int		x;
	int		*a;
	char	*b;

	// programa para imprimir por pantalla el tamaño en memoria de bites de un int
	x = sizeof(int);
	printf("%i\n", x);
	x = sizeof(int);
	printf("%i\n", x);

	a = malloc(sizeof(int));
	printf("%i\n", *a);

	a = malloc(sizeof(char));
	printf("%i\n", *a);

	b = malloc(sizeof(char));
	*b = 'a';
	printf("%c\n", *b);
	return (0);
}
