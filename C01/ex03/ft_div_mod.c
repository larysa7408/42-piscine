/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_div_mod.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:32:31 by username         #+#    #+#              */
/*   Updated: 2026/06/11 22:31:19 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	result_div;
// 	int	result_mod;

// 	ft_div_mod(42, 10, &result_div, &result_mod);
// 	printf("dvision = %d\n", result_div);
// 	printf("remaider = %d\n", result_mod);
// 	return (0);
// }
