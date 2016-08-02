/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 19:30:13 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 19:30:15 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	(*rush_pipe(int i))(int, int, int, int)
{
	while (i < 5)
	{
		if (i == 0)
			return (rush00_letter);
		if (i == 1)
			return (rush01_letter);
		if (i == 2)
			return (rush02_letter);
		if (i == 3)
			return (rush03_letter);
		if (i == 4)
			return (rush04_letter);
		i++;
	}
	return (0);
}

int		*rush_loop(int solution[], t_list *list, int height, int width)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (check_rush(list, height, width, rush_pipe(i)))
			solution[i] = 1;
		else
			solution[i] = 0;
		i++;
	}
	return (solution);
}

int		main(void)
{
	t_list	*list;
	char	c;
	int		width;
	int		height;
	int		*solution;

	list = 0;
	solution = (int*)(malloc(sizeof(int) * (5)));
	while (read(0, &c, 1))
		ft_list_push_back(&list, c);
	if ((dimensions(list, &height, &width)) == 0 || width == 0)
		ft_putstr("Error 404 ./rush-0X not found... idiot!\n");
	else
	{
		solution = rush_loop(solution, list, height, width);
		print_results(solution, width, height);
	}
	ft_list_clear(&list);
	free(solution);
	return (0);
}
