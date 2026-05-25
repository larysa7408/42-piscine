/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlowcase.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/18 19:25:06 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 13:55:28 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowecase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	str1[] = "HELLO";
// 	char	str2[] = "HelLo42";
// 	char	str3[] = "abcd";
// 	char	str4[] = " ";

// 	printf("%s\n", ft_strlowecase(str1));
// 	printf("%s\n", ft_strlowecase(str2));
// 	printf("%s\n", ft_strlowecase(str3));
// 	printf("%s\n", ft_strlowecase(str4));
// 	return (0);
// }
