/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:29:43 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/11 19:29:46 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		conditions(char *base);
void	ft_base_c(int n, char *b);

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;

	nbr = ft_atoi(str);
	conditions(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_base_c(nbr * -1, base);
	}
	else
		ft_base_c(nbr, base);
	return (0);
}

int	conditions(char *base)
{
	int	l;
	int	aux;

	l = 0;
	while (base[l] != '\0')
	{
		aux = l + 1;
		while (base[aux] != '\0')
		{
			if (base[l] == base[aux] || (base[l] == 43 || base[l] == 45))
				return (0);
			aux++;
		}
		l++;
	}
	if (l <= 1)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	n;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	r = 0;
	n = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (n % 2 != 0)
		r = -r;
	return (r);
}

void	ft_base_c(int n, char *b)
{
	int	l;

	l = 0;
	while (b[l] != '\0')
		l++;
	if (n < l)
		write (1, &b[n], 1);
	else
	{
		ft_base_c(n / l, b);
		write(1, &b[n % l], 1);
	}
}
