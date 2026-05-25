/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sqrt.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/24 15:58:51 by username         #+#    #+#              */
/*   Updated: 2026/05/24 16:38:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-4));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(20));
// 	printf("%d\n", ft_sqrt(25));
// 	printf("%d\n", ft_sqrt(26));
// 	return (0);
// }
