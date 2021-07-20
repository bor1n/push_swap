#include "../includes/push_swap.h"

void push(t_list *src, t_list **dest)
{
	t_list *last_src;
	t_list *last_dest;

	if (!(src))
		return ;
	last_src = ft_lstlast(src);
	//if dest in null
	if (!(*dest))
	{
		last_src->prev->next = 0;
		*dest = last_src;
		(*dest)->prev = 0;
		return ;
	}
	last_dest = ft_lstlast(*dest);
	if (ft_lstsize(*dest) >= 2)
		last_dest->prev->next = 0;
	last_dest->prev = last_src;
	last_src->next = 0;

}