#include <stdlib.h>
#include "list.h"

void print_list(t_list *list)
{
	while(list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return tmp;
}

int	main(void)
{
	t_list *list;

	list = NULL;

	list = add_link(list, "toto"\n);
	list = add_link(list, "tata"\n);
	list = add_link(list, "tutu"\n);

	print_list(list);

	return (0);
}

// ***** TIPS *****

int add_link(y_list **list, char *str)
{

}

int	main(void)
{
	t_list *list;

	list = NULL;

	int i;
	i = 10;
	int *p;
	p = &i;
	int **pp;
	pp = &p;

	list = add_link(list, "toto"\n);
	list = add_link(list, "tata"\n);
	list = add_link(list, "tutu"\n);

	print_list(list);

	return (0);
}