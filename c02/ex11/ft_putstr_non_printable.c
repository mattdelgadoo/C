/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:51:10 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 20:51:11 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				p;
	char			c;
	unsigned char	aux;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] > 126)
		{
			aux = str[p];
			c = "0123456789abcdef"[aux / 16];
			write(1, "\\", 1);
			write(1, &c, 1);
			c = "0123456789abcdef"[aux % 16];
			write(1, &c, 1);
		}
		else
			write(1, &str[p], 1);
		p++;
	}
}
