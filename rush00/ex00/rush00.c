/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:21:56 by jvieira           #+#    #+#             */
/*   Updated: 2020/10/24 18:37:46 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x < 1 || y < 1)
		return ;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				ft_putchar('o');
			else if ((i > 1 || i < x) && (j == 1 || j == y))
				ft_putchar('-');
			else if ((i == 1 || i == x) && (j > 1 || j < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			++i;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
