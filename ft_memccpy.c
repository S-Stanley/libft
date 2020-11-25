/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:02:30 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:35:38 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(const void *dest, const void *src, int c, int size)
{
	int		i;
	char	*dest2;
	char	*src2;
	char	x;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	x = (unsigned char)c;
	while (i < size)
	{
		dest2[i] = src2[i];
		if (src2[i] == x)
		{
			return (&dest2[i + 1]);
		}
		i++;
	}
	return (NULL);
}
