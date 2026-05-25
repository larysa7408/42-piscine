/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/19 12:05:02 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 20:42:12 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)

// {
// 	char			s1[] = "afdfg";
// 	char			s2[] = "asdfg";
// 	unsigned int	n = 3;

// 	printf("ft: %d\n", ft_strncmp(s1, s2, n));
// 	printf("og: %d\n", strncmp(s1, s2, n));
// 	return (0);
// }
