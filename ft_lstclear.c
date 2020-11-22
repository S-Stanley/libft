/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:02:37 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/22 16:03:17 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	int		i;

	i = 0;
	while (lst[i]->next)
		i++;
	while (i >= 0)
	{
		del(lst[i]);
		free(lst[i]);
	}
}
