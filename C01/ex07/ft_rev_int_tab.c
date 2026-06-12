/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_rev_int_tab.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:33:00 by username         #+#    #+#              */
/*   Updated: 2026/06/13 00:08:24 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[5];
// 	int	i;

// 	tab[0] = 1;
// 	tab[1] = 2;
// 	tab[2] = 3;
// 	tab[3] = 4;
// 	tab[4] = 5;
// 	ft_rev_int_tab(tab, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
