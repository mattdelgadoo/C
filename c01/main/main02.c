/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:54:23 by mperez-d          #+#    #+#             */
/*   Updated: 2021/09/30 18:54:36 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	y;
	int	z;
	int	*a;
	int	*b;

	y = 42;
	z = 56;
	a = &y;
	b = &z;
	ft_swap(&y, &z);
	printf("%d %d", *a, *b);
	return (0);
}
