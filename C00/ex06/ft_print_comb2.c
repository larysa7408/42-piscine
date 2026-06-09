/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_comb2.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/09 15:46:58 by username         #+#    #+#              */
/*   Updated: 2026/06/09 15:46:58 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n)
{
	char	first;
	char	second;

	first = n / 10 + '0';
	second = n % 10 + '0';
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_number(first);
			write(1, " ", 1);
			ft_print_number(second);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
