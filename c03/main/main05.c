/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:02:40 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 15:02:41 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			a[100] = "Hello";
	char			b[100] = " world";
	char			c[100] = "Hello";
	char			d[100] = " world";
	unsigned int	n = ft_strlcat(a, b, 9);

	ft_strlcat(a, b, n);
	printf("%s\n", a);
	strlcat(c, d, n);
	printf("%s\n", c);
	return (0);
}
