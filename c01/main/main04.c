/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:55:32 by mperez-d          #+#    #+#             */
/*   Updated: 2021/09/30 18:55:37 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	y;
	int	z;
	int	*a;
	int	*b;

	y = 48;
	z = 24;
	a = &y;
	b = &z;
	ft_ultimate_div_mod(&y, &z);
	printf("y entre z = %d\ny diferencia z = %d", *a, *b);
	return (0);
}
