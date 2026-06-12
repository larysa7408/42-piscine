/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:32:52 by username         #+#    #+#              */
/*   Updated: 2026/06/12 13:03:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("Hello"));
	printf("%d\n", ft_strlen("dog"));
	printf("%d\n", ft_strlen(""));
	return (0);
}
