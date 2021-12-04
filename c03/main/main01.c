/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:52:54 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 13:52:56 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello world";
	int		x = ft_strncmp(a, b, 8);

	printf("%d\n", x);
	if (x == 0)
		printf("Son iguales\n");
	else
		printf("Son diferentes\n");
	if (strncmp(a, b, x) == 0)
		printf("Son iguales\n");
	else
		printf("Son diferentes\n");
	return (0);
}
