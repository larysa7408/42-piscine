/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_recursive_factorial.c                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/23 22:09:21 by username         #+#    #+#              */
/*   Updated: 2026/05/24 16:41:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(2));
// 	printf("%d\n", ft_recursive_factorial(-3));
// 	printf("%d\n", ft_recursive_factorial(4));
// 	printf("%d\n", ft_recursive_factorial(5));
// 	return (0);
// }
