/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:13 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:35:19 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int c2)
{
	int		i;
	char	c;
	char	*s;

	c = c2;
	i = 0;
	s = (char *)str;
	while (str[i] + 1)
	{
		if (str[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
