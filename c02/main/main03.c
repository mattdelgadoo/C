/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:44:18 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 17:44:19 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "42a";
	int		x = ft_str_is_numeric(a);

	ft_str_is_numeric(a);
	printf("%d\n", x);
	return (0);
}
