/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:59:38 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 18:59:41 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);

void				ft_list_push_back(t_list **begin_list, char data);

void				ft_list_clear(t_list **begin_list);

int					dimensions(t_list *begin_list, int *h, int *w);

char				rush00_letter(int col, int row, int width, int height);

char				rush01_letter(int col, int row, int width, int height);

char				rush02_letter(int col, int row, int width, int height);

char				rush03_letter(int col, int row, int width, int height);

char				rush04_letter(int col, int row, int width, int height);

int					check_rush(t_list *begin_list, int h, int w,
						char (*func)(int col, int row, int width, int height));

void				ft_putchar(char c);

void				ft_putnbr(int nb);

void				ft_putstr(char *str);

void				print_bonus(int width, int height, int fail);

void				print_results(int *which_rush, int width, int height);

int					*rush_loop(int solution[], t_list *list, int height,
								int width);

#endif
