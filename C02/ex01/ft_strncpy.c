/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/17 23:32:16 by username         #+#    #+#              */
/*   Updated: 2026/05/17 23:32:28 by username        ###   ########.fr        */
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

//int main(void)
//{
//char src[] = "cat";
//char dest[10];
//ft_strncpy(dest, src, 5);
//printf("src = %s\n", src);
//printf("dest = %s\n", dest);
//return (0);
//}

// int main(void)
// {
// char src[] = "Hello";
// char dest[10] = {0};

// ft_strncpy(dest, src, 3);
// printf("src = %s\n", src);
// printf("dest = %s\n", dest);
// return (0);
// }
