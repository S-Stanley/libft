/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:02:19 by sserbin           #+#    #+#             */
/*   Updated: 2020/12/02 20:13:18 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (n == -0 || n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_int_min(char *str)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * 12);
	i = -1;
	while (str[++i])
		res[i] = str[i];
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		pos;

	if (n == -2147483648)
		return (ft_int_min("-2147483648"));
	pos = ft_check_pos(n);
	size = ft_int_len(n) + pos;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size--] = '\0';
	if (n < 0)
		n = n * -1;
	while (size >= 0)
	{
		res[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	if (pos)
		res[++size] = '-';
	return (res);
}
