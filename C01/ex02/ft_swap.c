/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_swap.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:32:24 by username         #+#    #+#              */
/*   Updated: 2026/06/11 21:50:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 5;
// 	y = 10;
// 	ft_swap(&x, &y);
// 	printf("x=%d\n", x);
// 	printf("y=%d\n", y);
// 	return (0);
// }
