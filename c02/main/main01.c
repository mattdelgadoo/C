/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:36:09 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 16:36:10 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	a[] = "Hello world";
	char	b[] = "Hi my friend";
	char	c[] = "Hello world";
	char	d[] = "Hi my friend";

	ft_strncpy(b, a, 4);
	printf("%s\n", b);
	strncpy(d, c, 4);
	printf("%s\n", d);
	return (0);
}
