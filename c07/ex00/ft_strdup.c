/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:29:45 by lprates           #+#    #+#             */
/*   Updated: 2020/11/05 16:42:31 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*target;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (!(target = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}

int main()
{
	char *test = "isto e um teste1234!";
	printf("%s\n", test);
	printf("%s\n", ft_strdup(test));
}