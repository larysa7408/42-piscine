/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_fibonacci.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/24 14:57:34 by username         #+#    #+#              */
/*   Updated: 2026/05/24 15:41:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(-3));
// 	printf("%d\n", ft_fibonacci(4));
// 	printf("%d\n", ft_fibonacci(5));
// 	printf("%d\n", ft_fibonacci(7));
// 	return (0);
// }
