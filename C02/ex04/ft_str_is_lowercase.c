/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_lowercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 14:52:03 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 13:57:45 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase, ("Hello"));
// 	printf("%d\n", ft_str_is_lowercase, ("hello"));
// 	printf("%d\n", ft_str_is_lowercase, ("abc"));
// 	printf("%d\n", ft_str_is_lowercase, ("abc123"));
// 	printf("%d\n", ft_str_is_lowercase, (" "));
// 	return (0);
// }
