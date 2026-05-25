/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strupcase.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 18:56:24 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 19:20:40 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "Hello";
// 	char	str3[] = "hel012";
// 	char	str4[] = "abc";

// 	printf("%s\n", ft_strupcase(str1));
// 	printf("%s\n", ft_strupcase(str2));
// 	printf("%s\n", ft_strupcase(str3));
// 	printf("%s\n", ft_strupcase(str4));
// 	return (0);
// }
