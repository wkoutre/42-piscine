/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 11:54:21 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 11:54:22 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_nb_to_str_len(int nb);
char	*ft_int_to_str(int nb);
int		eval_expr(char *str);
int		eval_expr_deep(char *str);
int		get_total(int *tab_nbr, int *tab_op, int count[]);
int		rank_op(int c);
int		calc(int a, int b, int c);
int		*get_op(char *str, int count[]);
int		get_str_in_parenthesis(char *str, int *beg, int *end);
char	*get_string(char *str, int beg, int end);
char	*update_formula(char *str, int beg, int end, int total);
int		find_op(char c);
void	count_nb_and_op(char *str, int count[]);
int		*get_nbr(char *str, int count[]);

#endif
