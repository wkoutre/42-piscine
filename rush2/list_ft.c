/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:59:23 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 18:59:25 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

t_list	*ft_create_elem(char data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->next = 0;
	node->data = data;
	return (node);
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *current;

	current = *begin_list;
	if (current == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (current->next != 0)
	{
		current = current->next;
	}
	current->next = ft_create_elem(data);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current;
	t_list	*to_free;

	current = *begin_list;
	to_free = *begin_list;
	while (current)
	{
		to_free = current;
		current = current->next;
		free(to_free);
	}
	*begin_list = 0;
}
