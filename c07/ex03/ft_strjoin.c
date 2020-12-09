/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:42:24 by lprates           #+#    #+#             */
/*   Updated: 2020/11/05 20:29:24 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		++j;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		strs_l;
	int		i;

	strs_l = 0;
	i = 0;
	if (size == 0)
	{
		all = malloc(1);
		all[0] = '\0';
		return (all);
	}
	while (i < size)
		strs_l += ft_strlen(strs[i++]);
	if (!(all = malloc(strs_l + (size - 1) * ft_strlen(sep) + 1)))
		return (NULL);
	all = ft_strcat(all, strs[0]);
	i = 1;
	while (i < size)
	{
		all = ft_strcat(all, sep);
		all = ft_strcat(all, strs[i++]);
	}
	return (all);
}

int main()
{
	char **strs = malloc(sizeof(char *) * 100);
	strs[0] = "this is";
	strs[1] = "a test";
	strs[2] = "please";
	strs[3] = "work";
	int size = 4;
	char *sep = "+";
	printf("%s\n", ft_strjoin(size, strs, sep));

}
