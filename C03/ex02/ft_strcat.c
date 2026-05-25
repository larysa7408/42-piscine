/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcat.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: lsatthof <lsatthof@student.42wolfsburg.de>#+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/19 12:35:32 by lsatthof         #+#    #+#              */
/*   Updated: 2026/05/19 20:38:17 by lsatthof        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	dest[50] = "42";
// 	char	src[] = "Piscine";

// 	printf("%s\n", ft_strcat(dest, src));
// 	return (0);
// }
