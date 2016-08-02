/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:59:30 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 18:59:31 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void		ft_putstr(char *str)
{
	if (*str != '\0')
	{
		ft_putchar(*str);
		ft_putstr(str + 1);
	}
}

void		print_bonus(int width, int height, int fail)
{
	if (fail != 0)
	{
		if (width > 1 && height > 1)
		{
			ft_putstr(" || [rectangle] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putchar(']');
			if (width == height)
			{
				ft_putstr(" || [square] [");
				ft_putnbr(width);
				ft_putstr("] [");
				ft_putnbr(height);
				ft_putchar(']');
			}
		}
	}
	ft_putchar('\n');
}

void		print_results(int *which_rush, int width, int height)
{
	int i;
	int fail;

	i = 0;
	fail = 0;
	while (which_rush[i] < 5)
	{
		if (which_rush[i] == 1)
		{
			if (fail > 0)
				ft_putstr(" || ");
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putchar(']');
			fail += 1;
		}
		i += 1;
	}
	if (fail == 0)
		ft_putstr("Error 404 ./rush-0X not found... idiot!");
	print_bonus(width, height, fail);
}
