/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 11:26:48 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 11:26:48 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"



int	eval_expr(char *str)
{

}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}