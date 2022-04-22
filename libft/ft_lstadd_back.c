
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	void	*tmp;

	if (lst)
	{
		if (!*lst && new)
			*lst = new;
		else if (new)
		{
			tmp = (void *)*lst;
			*lst = ft_lstlast(*lst);
			(*lst)->next = new;
			*lst = tmp;
		}
	}
}
