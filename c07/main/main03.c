#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"Hello", "world", ":)"};
	char	sep[] = " - ";

	printf("%s\n", ft_strjoin(3, strs, sep));
	return (0);
}
