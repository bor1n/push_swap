#include <stdio.h>
#include "../includes/push_swap.h"


int main()
{
	t_list *temp;
	t_list *b = malloc(sizeof(t_list));
	b = 0;
	t_list *a = ft_listnew(1, 0);
	a->next = ft_listnew(2, a);
//	temp = a->next;
//	temp->next = ft_listnew(3, temp);
//	temp = temp->next;
//	temp->next = ft_listnew(4, temp);

	push(a, &b);
	push(a, &b);
	printf("a:\n");
	while(a)
	{
		printf("%d\n", a->content);
		a = a->next;
	}
	printf("b:\n");
	while(b)
	{
		printf("%d\n", b->content);
		b = b->next;
	}


}
