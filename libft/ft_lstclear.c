
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*tmp;

	if (*lst && lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			(*del)(*lst);
			*lst = tmp;
		}
		(*lst) = NULL;
	}
}
