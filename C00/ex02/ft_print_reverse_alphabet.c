/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_reverse_alphabet.c                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/09 15:46:03 by username         #+#    #+#              */
/*   Updated: 2026/06/09 15:46:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
