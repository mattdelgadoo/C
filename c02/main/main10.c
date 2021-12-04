/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:42:12 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 19:42:13 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	a[] = "Hello world";
	char	b[] = "Hi world";
	char	c[] = "Hello world";
	char	d[] = "Hi world";

	ft_strlcpy(b, a, 8);
	printf("%s\n", b);
	strlcpy(d, c, 8);
	printf("%s\n", d);
	return (0);
}
