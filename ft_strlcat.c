/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:33 by sserbin           #+#    #+#             */
/*   Updated: 2020/12/06 22:21:16 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *str, size_t x)
{
	int	i;
	int	n;
	int	z;

	i = 0;
	while (dest[i] && i < (int)x)
		i++;
	n = 0;
	z = i;
	while (str[n] && i < (int)x - 1)
	{
		dest[i] = str[n];
		i++;
		n++;
	}
	if (i < (int8_t)x)
		dest[i] = '\0';
	return (ft_strlen(str) + z);
}
