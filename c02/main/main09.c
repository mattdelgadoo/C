/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:00:59 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/03 19:01:01 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	// char	a[] = "sAlut, co@mMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	a[] = "/,.fo]p,vvx@z<y+";

	ft_strcapitalize(a);
	printf("%s\n", a);
	return (0);
}
