/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_numeric.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 13:13:58 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 13:19:39 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	printf("%d\n", ft_str_is_numeric("12345"));
// 	printf("%d\n", ft_str_is_numeric("42Wolf"));
// 	printf("%d\n", ft_str_is_numeric("007"));
// 	printf("%d\n", ft_str_is_numeric(""));
// 	return (0);
// }
