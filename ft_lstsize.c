#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst->next)
		i++;
	return (i);
}