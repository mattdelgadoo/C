/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:00:42 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 19:00:43 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] < 65 || str[i - 1] > 122)
				if (!(str[i] >= 65 && str[i] <= 90))
					if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
						str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
