/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:02:55 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 15:02:58 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while ((c + i) < size - 1 && src[c] != '\0')
	{
		dest[c + i] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (i);
}
