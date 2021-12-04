/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:58:06 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/05 19:58:07 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_base_c(int n, char *b);

void	ft_putnbr_base(int nbr, char *base)
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
				return ;
			aux++;
		}
		l++;
	}
	if (l <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_base_c(nbr * -1, base);
	}
	else
		ft_base_c(nbr, base);
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
