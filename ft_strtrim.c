/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:05:22 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:05:23 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_for_const(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_isit_it(const char *str, int start, const char *to_find)
{
	int		i;

	i = 0;
	if (ft_strlen_for_const(to_find) != (ft_strlen_for_const(str) - start))
		return (0);
	while (str[start] && str[start] == to_find[i])
	{
		i++;
		start++;
	}
	if (i == ft_strlen_for_const(to_find))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		n;

	res = malloc(sizeof(char) * (ft_strlen_for_const(s1) + 1));
	if (!res)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i] == set[i])
		i++;
	while (!ft_isit_it(s1, i, set))
	{
		res[n] = s1[i];
		i++;
		n++;
	}
	return (res);
}
