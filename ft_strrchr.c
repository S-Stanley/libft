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
	char	c;
	int		index;
	char	*s;

	c = c2;
	i = 0;
	index = -1;
	s = (char *)str;
	while (str[i])
	{
		if (str[i] == c)
			index = i;
		i++;
	}

	if (index == -1)
		return (NULL);
	return (&s[index]);
}
