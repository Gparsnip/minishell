
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst->next != NULL)
		{
			(*f)((void *)lst->content);
			lst = lst->next;
		}
		(*f)((void *)lst->content);
	}
}
