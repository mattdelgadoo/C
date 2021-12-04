/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:24:48 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 16:24:50 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "H";
	char	b[] = "Hi";
	char	c[] = "H";
	char	d[] = "Hi";

	ft_strcpy(a, b);
	printf("%s\n", a);
	strcpy(c, d);
	printf("%s\n", c);
	return (0);
}
