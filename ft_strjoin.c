/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:24 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:04:25 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_count(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strlcat2(char *dest, const char *src)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_len_count(s1) + ft_len_count(s2) + 1));
	if (!res)
		return (NULL);
	ft_strlcat2(res, s1);
	ft_strlcat2(res, s2);
	return (res);
}
