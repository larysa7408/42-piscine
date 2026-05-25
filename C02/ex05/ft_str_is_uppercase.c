/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_uppercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 14:34:55 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 18:52:30 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("HELLO"));
// 	printf("%d\n", ft_str_is_uppercase("hello"));
// 	printf("%d\n", ft_str_is_uppercase("HEL042"));
// 	printf("%d\n", ft_str_is_uppercase(" "));
// 	return (0);
// }
