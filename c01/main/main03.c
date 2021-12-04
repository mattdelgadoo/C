/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:54:48 by mperez-d          #+#    #+#             */
/*   Updated: 2021/09/30 18:55:01 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	d;
	int	dd;

	ft_div_mod(48, 24, &d, &dd);
	printf("a entre b = %d\nel resto entre a y b = %d", d, dd);
	return (0);
}
