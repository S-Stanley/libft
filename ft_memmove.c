/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:03:17 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/19 16:37:29 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dist, const void *src, int n)
{
	int		i;
	char	*dist_b;
	char	*src_b;

	i = 0;
	dist_b = (char *)dist;
	src_b = (char *)src;
	while (i <= n)
	{
		dist_b[i] = src_b[i];
		i++;
	}
	return (dist);
}
