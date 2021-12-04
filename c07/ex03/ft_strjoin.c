/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:09:47 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/13 20:09:48 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strs_len(int size, char **strs)
{
	int	a;
	int	l;
	int	c;

	a = 0;
	l = 0;
	while (a < size)
	{
		c = 0;
		while (strs[a][c] != '\0')
			c++;
		l = l + c;
		a++;
	}
	return (l);
}

int	sep_len(char *sep)
{
	int		b;

	b = 0;
	while (sep[b] != '\0')
		b++;
	return (b);
}

int	g_i;
int	g_x;

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*aux;
	int		p;
	int		n;

	g_i = strs_len(size, strs) + (sep_len(sep) * (size - 1));
	aux = malloc((g_i + 1) * sizeof(char));
	if (aux == 0)
		return (aux);
	p = 0;
	g_x = 0;
	while (p < size)
	{
		n = 0;
		while (strs[p][n] != '\0')
			aux[g_x++] = strs[p][n++];
		if (strs[p][n] == '\0' && p < size - 1)
		{
			n = 0;
			while (sep[n] != '\0')
				aux[g_x++] = sep[n++];
		}
		p++;
	}
	aux[g_x] = '\0';
	return (aux);
}
