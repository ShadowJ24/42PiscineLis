/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:17:45 by lprates           #+#    #+#             */
/*   Updated: 2020/10/25 12:17:52 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int i;
	int j;
	int k;
	char x[10];
	char y[10];

	i = 1;
	j = '0';
	k = 0;
	while (j <= '9')
	{
		x[j] = j;
		j++;
	}
	j = '0';
	if (n < 0 || n > 10)
		return ;
	while (k <= n)
	{
	while (i <= n)
	{
		while (j <= '9')
		{
			if (x[j] + x[k] < y[x] + y[k])
			{
				ft_putchar(x[j]);
				y[k] = 

			}
			j++;
		}
		ft_putchar(',');
		ft_putchar(' ');
		j = '0';
		i++;
	}
	}
	k++;
	return ;
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
