/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:04:33 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:37 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dest, char *str, int x)
{
	int		i;
	int		n;

	i = 0;
	while (dest[i])
		i++;
	n = 0;
	while (str[n] && i < x - 1)
	{
		dest[i] = str[n];
		i++;
		n++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (n);
}
