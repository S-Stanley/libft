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
	t_list	*tmp;
	t_list	*lst2;

	lst2 = *lst;
	while (lst2)
	{
		tmp = lst2->next;
		del(lst2->content);
		free(lst2);
		lst2 = tmp;
	}
	*lst = NULL;
}
