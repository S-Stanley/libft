#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	(void)del;

	while(lst->next)
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