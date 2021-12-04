/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:42:08 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 14:42:09 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	a[] = "Hello world!";
	char	b[] = "wo";
	char	*x = ft_strstr(a, b);
	char	c[] = "Hello world!";
	char	d[] = "wo";
	char	*y = strstr(c, d);

	printf("%s\n", x);
	printf("%s\n", y);
	return (0);
}
