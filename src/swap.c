#include "../includes/push_swap.h"

void	swap(t_list *a)
{
	t_list *last;
	t_list *pre_last;

	if (!(a) || ft_lstsize(a) <= 2)
		return ;
	last = ft_lstlast(a);
	pre_last = last->prev;

	pre_last->prev->next = last;
	last->prev = pre_last->prev;
	pre_last->prev = last;
	pre_last->next = 0;
	last->next = pre_last;
}

