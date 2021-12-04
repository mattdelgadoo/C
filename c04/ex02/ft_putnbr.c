/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:09:39 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 16:09:40 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	g_d;
int	g_p;
int	g_a;

void	digits(long int n)
{
	g_d = 1;
	while (n >= 10)
	{
		n = n / 10;
		g_d++;
	}
}

void	ft_putnbr(int nb)
{
	long int	lnb;
	char		cn[11];

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -(lnb);
	}
	digits(lnb);
	cn[g_d] = '\0';
	g_p = g_d - 1;
	while (g_p >= 0)
	{
		g_a = lnb % 10;
		lnb = lnb / 10;
		cn[g_p] = g_a + '0';
		g_p--;
	}
	write(1, &cn, g_d);
}
