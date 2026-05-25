/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/19 11:49:51 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 20:43:57 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("abc", "abc"));
// 	printf("%d\n", ft_strcmp("abd", "abc"));
// 	printf("%d\n", ft_strcmp("ab", "abc"));
// 	printf("%d\n", ft_strcmp("abc", "ab"));
// 	return (0);
// }
