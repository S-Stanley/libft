/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:02:19 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:02:20 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_pos(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

int		ft_int_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + ft_check_pos(n));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_int_len(n) + 1));
	if (!res)
		return (NULL);
	if (!ft_check_pos(n))
	{
		res[i] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		res[i] = n % 10;
	}
	return (res);
}
