/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:35:52 by mperez-d          #+#    #+#             */
/*   Updated: 2021/10/11 20:35:53 by mperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
	{
		if (index == 0)
			return (0);
		else if (index < 3)
			return (1);
		else
			return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
}
