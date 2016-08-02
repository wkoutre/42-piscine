/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expressions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 11:39:55 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 11:39:59 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		multiplication(int a, int b)
{
	int	res;

	res = (a * b)
	if (res != 0 && res / a != b)
		res = 0;
	return res;
}

#include "ft.h"

int		modulo(int a, int b)
{
	return (a % b);
}

int		division(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

int		addition(int a, int b)
{
	return (a + b);
}

int		subtraction(int a, int b)
{
	return (a - b);
}
