/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:05:50 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:10 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, int n)
{
	char			*res;
	int				i;
	unsigned int	len;

	i = 0;
	len = (unsigned int)n;
	res = malloc(sizeof(char) * (ft_strlen(s, start) + 1));
	if (!res)
	{
		return (NULL);
	}
	while (start <= len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
