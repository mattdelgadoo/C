/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:20:20 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/13 17:20:21 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*aux;
	int	i;

	if (min >= max)
	{
		aux = 0;
		return (aux);
	}
	aux = malloc((max - min) * sizeof(int));
	if (aux == 0)
		return (aux);
	i = 0;
	while (min < max)
		aux[i++] = min++;
	return (aux);
}
