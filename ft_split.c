/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:06 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:04:06 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_count(const char *str, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == c)
			n++;
		i++;
	}
	return (n + 1);
}

int		ft_what_is_next(const char *str, char c, int start)
{
	int count;

	count = 0;
	while (str[start] && str[start] != c)
	{
		start++;
		count++;
	}
	return (count);
}

char	*ft_split_the_tea(const char *str, char c, int start)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_what_is_next(str, c, start) + 1));
	while (str[start] != c)
	{
		res[i] = str[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		ft_conststrlen(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		n;
	char	**res;
	int		index;

	res = malloc(sizeof(char *) * ft_count(s, c));
	if (!res)
		return (NULL);
	i = 0;
	x = 0;
	n = 0;
	index = 0;
	res[x] = malloc(sizeof(char) * (ft_conststrlen(s) + 1));
	while (s[i])
	{
		if (s[i] != c) 
		{
			res[x][n] = s[i];
			n++;
			i++;
		}
		else
		{
			res[x][n] = 0;
			x++;
			res[x] = malloc(sizeof(char) * (ft_conststrlen(s) + 1));
			i++;
			n = 0;
			while (s[i] == c)
				i++;
		}
	}
	x++;
	res[x] = 0;
 	i = 0;
	return (res);
}
