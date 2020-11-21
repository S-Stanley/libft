/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:02:30 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:35:38 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(const void *src, const void *dest, int c, int size)
{
	int		i;
	char	*dest2;
	char	*src2;
	void	*dest3;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	dest3 = (void *)dest;
	while (i < size)
	{
		dest2[i] = src2[i];
		if (src2[i] == c)
		{
			return (&dest3[i + 1]);
		}
		i++;
	}
	return (dest3);
}
