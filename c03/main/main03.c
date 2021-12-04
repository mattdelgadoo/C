/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:37:37 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 14:37:38 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	a[100] = "Hello";
	char	b[100] = " world";
	char	c[100] = "Hello";
	char	d[100] = " world";

	ft_strncat(a, b, 5);
	printf("%s\n", a);
	strncat(c, d, 5);
	printf("%s\n", c);
	return (0);
}
