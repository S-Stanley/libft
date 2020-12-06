/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:43 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:04:43 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dest, char *str, size_t n)
{
	int i;

	i = 0;
	if (dest == NULL || str == NULL)
		return (0);
	while (str[i] && n > 1)
	{
		dest[i] = str[i];
		i++;
		n--;
	}
	if (n > 0)
		dest[i] = '\0';
	return (ft_strlen(str));
}
