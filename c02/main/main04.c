/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:22:55 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 18:22:56 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	a[] = "hello";
	int		x = ft_str_is_lowercase(a);

	ft_str_is_lowercase(a);
	printf("%d\n", x);
	return (0);
}
