/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:05:28 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:05:29 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c2)
{
	int		i;
	char	*res;
	char	c;
	int		find;

	c = c2;
	i = 0;
	res = malloc(sizeof(char));
	find = 0;
	while (str[i] + 1)
	{
		if (str[i] == c)
			res[i] = str[i];
		i++;
	}
	if (find)
		return (res);
	return (NULL);
}
