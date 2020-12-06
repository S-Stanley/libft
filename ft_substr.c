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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int n)
{
	char			*res;
	int				i;
	unsigned int	len;

	i = 0;
	len = (unsigned int)n;
	res = malloc(sizeof(char) * (ft_strlen((char *)s) - start + 1));
	if (!res || !s)
		return (NULL);
	if (ft_strlen((char *)s) < (int)start)
	{
		res = "";
		return (res);
	}
	while (s[start] && len > 0)
	{
		res[i] = s[start];
		i++;
		start++;
		len--;
	}
	res[i] = '\0';
	return (res);
}
