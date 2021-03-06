/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:43:09 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 17:43:10 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	v;

	i = 0;
	v = 1;
	while (str[i] != '\0' && v == 1)
	{
		if (str[i] >= 48 && str[i] <= 57)
			v = 1;
		else
			v = 0;
		i++;
	}
	return (v);
}
