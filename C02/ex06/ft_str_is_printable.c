/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_uppercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 14:34:55 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 14:35:01 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello"));
// 	printf("%d\n", ft_str_is_printable("Hello123!"));
// 	printf("%d\n", ft_str_is_printable("hel\noo"));
// 	printf("%d\n", ft_str_is_printable("123\05646"));
// 	printf("%d\n", ft_str_is_printable(" "));
// 	return (0);
// }