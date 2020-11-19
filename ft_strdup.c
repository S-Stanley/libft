/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:20 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:04:21 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int i;

	i = 0;
	char *s2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (s2 == NULL)
		return NULL;
	while (str[i])
	{
		s2[i] = str[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
