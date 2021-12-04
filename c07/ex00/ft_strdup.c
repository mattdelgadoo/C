/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:42:38 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/12 17:42:39 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*aux;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	aux = malloc((i + 1) * sizeof(char));
	if (aux == 0)
		return (aux);
	i = 0;
	while (src[i] != '\0')
	{
		aux[i] = src[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
