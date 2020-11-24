/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:33 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:37 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int		ft_strlcat(char *dest, char *str, int x)
{
	int		i;
	int		n;
	int		z;

	i = 0;
	while (dest[i] && i < x)
		i++;
	n = 0;
	z = i;
	while (str[n] && i < x - 1)
	{
		dest[i] = str[n];
		i++;
		n++;
	}
	if (i < x)
		dest[i] = '\0';
	return (ft_strlen(str) + z);
}
