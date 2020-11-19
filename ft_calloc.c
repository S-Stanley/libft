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

#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	int		i;
	void	*total;
	char	*str;

	i = 0;
	total = malloc(size);
	str = (char *)total;
	while (i <= count)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
