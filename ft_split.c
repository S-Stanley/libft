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

int		ft_multi_fct(const char *str, char c, int start, int mode)
{
	int count;

	if (mode == 0)
	{
		count = 0;
		while (str[start] && str[start] != c)
		{
			start++;
			count++;
		}
		return (count);
	}
	else
	{
		count = 0;
		while (str[count])
			count++;
		return (count);
	}
}

char	*ft_split_the_tea(const char *str, char c, int start)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_multi_fct(str, c, start, 0) + 1));
	while (str[start] != c)
	{
		res[i] = str[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split2(char const *s, char c, int x, int i)
{
	char	**res;
	int		n;

	n = 0;
	if (!(res = malloc(sizeof(char *) * ft_count(s, c))))
		return (NULL);
	res[x] = malloc(sizeof(char) * (ft_multi_fct(s, 'c', 0, 1) + 1));
	while (s[i])
	{
		if (s[i] != c)
			res[x][n++] = s[i++];
		else
		{
			res[x++][n] = 0;
			res[x] = malloc(sizeof(char) * (ft_multi_fct(s, 'c', 0, 1) + 1));
			i++;
			n = 0;
			while (s[i] == c)
				i++;
		}
	}
	res[x][n] = '\0';
	res[x + 1] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;

	if (s == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i] == c)
		i++;
	return (ft_split2(s, c, x, i));
}

