/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 18:04:58 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/18 10:16:21 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	src[] = "cat";
// 	char	dest[10];

// 	ft_strcpy(dest, src);
// 	printf("src = %s\n", src);
// 	printf("dest = %s\n", dest);
// 	return (0);
// }
