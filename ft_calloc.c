/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Stanley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:33:27 by Stanley           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:49 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int count, int size)
{
	int		i;
	void	*total;

	i = 0;
	total = malloc(count * size);
	if (!total)
		return (NULL);
	return (ft_memset(total, 0, count * size));
}
