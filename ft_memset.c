/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:03:24 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:36:57 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *data, int to_write, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)data;
	while (i < size)
	{
		str[i] = to_write;
		i++;
	}
	return (str);
}
