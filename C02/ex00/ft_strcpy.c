/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/17 22:38:25 by username         #+#    #+#              */
/*   Updated: 2026/05/17 22:38:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
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

// int main(void)
// {
// char src[] = "cat";
// char dest[10];

// ft_strcpy(dest, src);
// printf("src = %s\n", src);
// printf("dest = %s\n", dest);
// return (0);
// }
