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