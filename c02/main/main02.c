/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:40:49 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 17:40:50 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a[] = "Hello";
	int		x = ft_str_is_alpha(a);

	ft_str_is_alpha(a);
	printf("%d\n", x);
	return (0);
}
