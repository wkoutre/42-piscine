/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:59:15 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 18:59:17 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		dimensions(t_list *begin_list, int *h, int *w)
{
	t_list	*current;
	int		i;

	i = 0;
	if (begin_list)
	{
		current = begin_list;
		while (current->next != 0)
		{
			if (current->data == '\n')
				(*h)++;
			i++;
			current = current->next;
		}
		if (current->data != '\n')
			return (0);
		(*h)++;
		*w = i / *h;
		return (1);
	}
	return (0);
}

int		check_rush(t_list *begin_list, int h, int w,
						char (*func)(int col, int row, int width, int height))
{
	t_list	*cur;
	int		i;

	i = 0;
	cur = begin_list;
	while (cur)
	{
		if (cur->data != func(i % (w + 1), i / (w + 1), w, h))
			return (0);
		cur = cur->next;
		i++;
	}
	return (1);
}
