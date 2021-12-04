#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*a = ft_range(min, max);
	int	i;

	if (a == 0)
		printf("null\n");
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return (0);
}
