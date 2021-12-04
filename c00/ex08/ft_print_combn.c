/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:55:37 by mperez-d          #+#    #+#             */
/*   Updated: 2021/09/28 18:02:49 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(3);
}

void	ft_print_combn(int n)
{
	int a;
	int b;
	int p;
	int z;
	char	c[n];

	a = 0;
    c[n] = '\0';
    p = n - 1;
	b = pow(10, n) - 1;
	while (a <= b)
	{
    	while (p >= 0)
    	{
    	    z = a++ % 10;
    	    a = a / 10;
    	    c[p] = z + '0';
			p--;
    	}
        if (a == b)
            write(1, &c, n);
        else
		{
            write(1, &c, n);
            write(1, ", ", 2);
		}
		a++;
	}
}
