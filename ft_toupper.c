/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:06:08 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:06:09 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

unsigned char	*ft_toupper(unsigned char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isupper(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
