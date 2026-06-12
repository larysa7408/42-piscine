/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ultimate_div_mod.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:32:38 by username         #+#    #+#              */
/*   Updated: 2026/06/12 12:13:56 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 17;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// 	return (0);
// }
