/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:56:31 by mperez-d          #+#    #+#             */
/*   Updated: 2021/09/30 18:56:36 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	a[] = {0, 1, 2, 3, 4, 5};
	int	p = 0;

	ft_rev_int_tab(a, 6);
	while (p < 6)
	{
		printf("%d", a[p]);
		p++;
	}
	return (0);
}
