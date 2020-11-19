/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:03:05 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:03:06 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, int n)
{
	int		i;
	char	*s1b;
	char	*s2b;

	s1b = (char *)s1;
	s2b = (char *)s2;
	i = 0;
	while (i <= n)
	{
		if (s1b[i] != s2b[i])
		{
			return (s1b[i] - s2b[i]);
		}
		i++;
	}
	return (0);
}
