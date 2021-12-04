/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:17:06 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/13 18:17:07 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*aux;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	aux = malloc((max - min) * sizeof(int));
	if (aux == 0)
		return (-1);
	i = 0;
	while (min < max)
		aux[i++] = min++;
	*range = aux;
	return (i);
}
