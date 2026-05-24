/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_iterative_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/23 23:51:37 by username         #+#    #+#              */
/*   Updated: 2026/05/24 00:48:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(3, 4));
// 	printf("%d\n", ft_iterative_power(5, 0));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(2, -3));
// 	return (0);
// }
