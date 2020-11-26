/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <stanleyserbin@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:00:53 by sserbin           #+#    #+#             */
/*   Updated: 2020/11/22 16:01:42 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	int		i;

	if (!alst || !new)
		return ;
	if (alst[0] == NULL)
	{
		alst[0] = new;
		return ;
	}
	i = -1;
	while (alst[++i]->next)
		alst[i] = alst[i]->next;
	alst[i]->next = new;
}
