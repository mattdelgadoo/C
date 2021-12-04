/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:13:34 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/04 16:13:35 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	int		a;
	char	str[] = "\n	  	---+- -+1234ab567 ";
	int		val;
	char	p[] = "1234ab567";

	a = ft_atoi(str);
	printf("String value = \"%s\", Int value = %d\n", str, a);
	val = atoi(p);
	printf("String value = \"%s\", Int value = %d\n", p, val);
	return (0);
}
