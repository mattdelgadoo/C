#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*aux;
	int	min;
	int	max;
	int	size;

	min = 0;
	max = 10;
	size = ft_ultimate_range(&aux, min, max);
	if (size <= 0)
		printf("null\n");
	else
		printf("%d\n", size);
	return (0);
}
