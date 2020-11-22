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
	t_list *res;

	(void)d;
	while (lst->next)
	{
		res = malloc(sizeof(t_list));
		res->content = lst->content;
		res->next = lst->next;
		lst = lst->next;
	}
	while (res->next)
	{
		res->content = f(res->content);
		res = res->next;
	}
	return (res);
}
