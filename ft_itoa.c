/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:02:19 by sserbin           #+#    #+#             */
/*   Updated: 2020/12/01 15:56:46 by sserbin          ###   ########.fr       */
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

char	*ft_int_min(char *res, char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		res[i] = str[i];
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		pos;

	res = malloc(sizeof(char) * (size + 1));
	if (n == -2147483648)
		return (ft_int_min(res, "-2147483648"));
	if (!res)
		return (NULL);
	pos = ft_check_pos(n);
        size = ft_int_len(n) + pos;
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
