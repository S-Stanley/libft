/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:03:11 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:38:11 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dist, const void *src, size_t n)
{
	size_t	i;
	char	*dist_b;
	char	*src_b;

	if (dist == NULL && src == NULL)
		return (NULL);
	dist_b = (char *)dist;
	src_b = (char *)src;
	i = 0;
	while (i < n)
	{
		dist_b[i] = src_b[i];
		i++;
	}
	return (dist);
}
