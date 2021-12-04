/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:50:41 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/10 19:50:42 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	while (i < argc)
	{
		p = 0;
		while (argv[i][p] != '\0')
		{
			write (1, &argv[i][p], 1);
			p++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		p;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		p = i + 1;
		while (p < argc)
		{
			if (ft_strcmp(argv[i], argv[p]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[p];
				argv[p] = aux;
			}
			p++;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
