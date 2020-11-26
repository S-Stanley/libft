/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:03:54 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/22 16:06:22 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*res;
	t_list	*tmp;
	t_list	*new;

	res = NULL;
	tmp = NULL;
	(void)d;
	if (lst && f)
	{
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (tmp == NULL)
			{
				tmp = new;
				res = new;
			}
			else
			{
				res->next = new;
				res = res->next;
			}
			lst = lst->next;
		}
	}
	return (tmp);
}