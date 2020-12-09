/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:21:56 by jvieira           #+#    #+#             */
/*   Updated: 2020/10/24 19:17:16 by lprates          ###   ########.fr       */
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
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('A');
			else if (((i > 1 && i < x) && (j == 1 || j == y)) ||
					((i == 1 || i == x) && (j > 1 && j < y)))
				ft_putchar('B');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			++i;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
