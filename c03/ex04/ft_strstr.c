/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:55:21 by lprates           #+#    #+#             */
/*   Updated: 2020/10/30 11:50:57 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int v;

	i = 0;
	j = 0;
	v = 1;
	while (str[i++] != '\0')
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (to_find[j] != '\0')
			{
				if (to_find[j++] != str[k++])
					v = 0;
			}
			if (v == 1)
				return (&str[i]);
			j = 0;
		}
	}
	return (0);
}
