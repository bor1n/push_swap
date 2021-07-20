#include "libft.h"

t_list	*ft_listnew(int content, t_list *prev)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (res == 0)
		return (0);
	res->content = content;
	res->next = 0;
	res->prev = prev;
	return (res);
}
