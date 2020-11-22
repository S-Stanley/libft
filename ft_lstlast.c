#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int		i;

	i = 0;
	while(lst->next)
		i++;
	return (&lst[i]);
}