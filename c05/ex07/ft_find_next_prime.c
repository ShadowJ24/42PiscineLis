/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:44:22 by lprates           #+#    #+#             */
/*   Updated: 2020/11/04 17:31:15 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int count;

	i = 2;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 0)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
