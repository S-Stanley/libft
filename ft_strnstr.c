/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:05:11 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:05:12 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isit(char *str, char *to_find, int start, int end)
{
	size_t	i;

	i = 0;
	while (str[start] && to_find[i] && str[start] == to_find[i] && start != end)
	{
		i++;
		start++;
	}
	if (i == ft_strlen(to_find))
		return (1);
	return (0);
}

char	*ft_strnstr(char *str, char *to_find, size_t searchmax)
{
	size_t	i;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i] && i != searchmax)
	{
		if (ft_isit(str, to_find, i, searchmax))
			return (&str[i]);
		i++;
	}
	return (NULL);
}
