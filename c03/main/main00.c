/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:30:08 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 13:30:09 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello world";
	int		x = ft_strcmp(a, b);

	printf("%d\n", x);
	printf("%d", strcmp(a, b));
	// if (x == 0)
	// 	printf("Son iguales\n");
	// else
	// 	printf("Son diferentes\n");
	// if (strcmp(a, b) == 0)
	// 	printf("Son iguales\n");
	// else
	// 	printf("Son diferentes\n");
	// return (0);
}
