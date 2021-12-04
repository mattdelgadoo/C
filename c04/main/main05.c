/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:29:58 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/11 19:29:59 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	str[] = "\n	  	---+--+42ab567 ";
	int		a = ft_atoi_base(str, "01");

	printf("%d\n", a);
	ft_atoi_base(str, "01");
	return (0);
}
