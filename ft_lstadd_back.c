#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	int		i;

	i = 0;
	while (alst[i])
		i++;
	alst[i]->next = new;
}