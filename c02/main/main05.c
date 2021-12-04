/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:25:14 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 18:25:16 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	a[] = "HELLOWORLD";
	int		x = ft_str_is_uppercase(a);

	ft_str_is_uppercase(a);
	printf("%d\n", x);
	return (0);
}
