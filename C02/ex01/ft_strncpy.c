/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/14 15:33:07 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 13:33:29 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	src[] = "cat";

// 	char	dest[10] =
// 	{
// 		0
// 	};
// 	ft_strncpy(dest, src, 2);
// 	printf("src = %s\n", src);
// 	printf("dest = %s\n", dest);
// 	return (0);
// }
