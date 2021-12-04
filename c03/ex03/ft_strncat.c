/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:38:00 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 14:38:03 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (c < nb && src[c] != '\0')
	{
		dest[c + i] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (dest);
}
