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

#include "libft.h"

void	ft_concat(const char *s1, const char *s2, char *res)
{
	int		i;
	int		n;

	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	n = i;
	i = 0;
	while (s2[i])
	{
		res[n] = s2[i];
		n++;
		i++;
	}
	res[n] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!res)
		return (NULL);
	ft_concat(s1, s2, res);
	return (res);
}
