/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 15:35:30 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/23 15:35:31 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putarray(char **str)
{
	int i;

	i = 0;
	while (*str[i])
	{
		ft_putchar(*str[i]);
		i++;
	}
}

void	ft_putstr_no_space(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
}

void	print_row(char **argv)
{
	int i;

	i = 0;
	while (argv++)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}


int main(int argc, char **argv)
{
	char	*error;
	int i;

	i = -1;
	error = "Error";
	if (argc == 1)
	{
		ft_putstr(error);
		ft_putchar('\n');
	}
	else
		{
			print_row(argv);
		}
	return (0);
}