/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_printable.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 15:31:32 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 17:19:21 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Hello"));
// 	printf("%d\n", ft_str_is_alpha("hello"));
// 	printf("%d\n", ft_str_is_alpha("Hel42"));
// 	printf("%d\n", ft_str_is_alpha("42"));
// 	printf("%d\n", ft_str_is_alpha(" "));
// 	return 0;
// }