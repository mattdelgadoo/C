#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	a[] = "Hi!";
	char	*b = ft_strdup(a);
	char	*c = strdup(a);

	printf("My function: %s\n", b);
	printf("Original function: %s\n", c);
	return (0);
}
