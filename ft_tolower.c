/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:06:02 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:06:03 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

unsigned char	*ft_tolower(unsigned char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_islower(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
