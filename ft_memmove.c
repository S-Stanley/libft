/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:03:17 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:29 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*dst_b;
	unsigned char	*src_b;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	dst_b = (unsigned char *)dst;
	src_b = (unsigned char *)src;
	if (src_b < dst_b)
	{
		while (i++ < n)
			dst_b[n - i] = src_b[n - i];
	}
	else
	{
		while (i < n - 1)
		{
			dst_b[i] = src_b[i];
			i++;
		}
	}
	return (dst);
}