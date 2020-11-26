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

#include "libft.h"

int		ft_search(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_continue(char *str, int i, char *set)
{
	while (str[i])
	{
		if (!ft_search(str[i], set))
			return (1);
		i++;
	}
	return (0);
}

int		ft_howmuch(char *s1, char *set)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (ft_search(s1[i], (char *)set) && s1[i])
		i++;
	while (s1[i] && ft_continue((char *)s1, i, (char *)set))
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		n;

	if (s1 == NULL || set == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (ft_howmuch((char *)s1, (char *)set) + 1));
	if (!res)
		return (NULL);
	i = 0;
	n = 0;
	while (ft_search(s1[i], (char *)set) && s1[i])
		i++;
	while (s1[i] && ft_continue((char *)s1, i, (char *)set))
	{
		res[n] = s1[i];
		i++;
		n++;
	}
	res[n] = '\0';
	return (res);
}
