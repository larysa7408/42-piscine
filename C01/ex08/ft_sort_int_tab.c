/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sort_int_tab.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:33:07 by username         #+#    #+#              */
/*   Updated: 2026/06/13 12:54:57 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	tab[5];
// 	int	i;

// 	tab[0] = 5;
// 	tab[1] = 2;
// 	tab[2] = 8;
// 	tab[3] = 1;
// 	tab[4] = 4;
// 	ft_sort_int_tab(tab, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
