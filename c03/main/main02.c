/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:14:18 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 14:14:19 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	a[100] = "Hello";
	char	b[100] = " world";
	char	c[100] = "Hello";
	char	d[100] = " world";

	ft_strcat(a, b);
	printf("%s\n", a);
	strcat(c, d);
	printf("%s\n", c);
	return (0);
}
