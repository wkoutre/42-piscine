/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes0_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:59:47 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 18:59:55 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	rush00_letter(int col, int row, int width, int height)
{
	if (row == 0 || row == height - 1)
	{
		if (col == 0 || col == width - 1)
			return ('o');
		else if (col == width)
			return ('\n');
		else
			return ('-');
	}
	else
	{
		if (col == 0 || col == width - 1)
			return ('|');
		else if (col == width)
			return ('\n');
		else
			return (' ');
	}
}

char	rush01_letter(int col, int row, int width, int height)
{
	if (col == width)
		return ('\n');
	if (row == 0)
	{
		if (col == 0)
			return ('/');
		else if (col == width - 1)
			return ('\\');
		else
			return ('*');
	}
	else if (row == height - 1)
		if (col == 0)
			return ('\\');
		else if (col == width - 1)
			return ('/');
		else
			return ('*');
	else
	{
		if (col == 0 || col == width - 1)
			return ('*');
		else
			return (' ');
	}
}

char	rush02_letter(int col, int row, int width, int height)
{
	if (row == 0)
	{
		if (col == 0 || col == width - 1)
			return ('A');
		else if (col == width)
			return ('\n');
		else
			return ('B');
	}
	else if (row == height - 1)
		if (col == 0 || col == width - 1)
			return ('C');
		else if (col == width)
			return ('\n');
		else
			return ('B');
	else
	{
		if (col == 0 || col == width - 1)
			return ('B');
		else if (col == width)
			return ('\n');
		else
			return (' ');
	}
}

char	rush03_letter(int col, int row, int width, int height)
{
	if (row == 0 || row == height - 1)
	{
		if (col == 0)
			return ('A');
		else if (col == width - 1)
			return ('C');
		else if (col == width)
			return ('\n');
		else
			return ('B');
	}
	else
	{
		if (col == 0 || col == width - 1)
			return ('B');
		else if (col == width)
			return ('\n');
		else
			return (' ');
	}
}

char	rush04_letter(int col, int row, int width, int height)
{
	if (col == width)
		return ('\n');
	if (row == 0)
	{
		if (col == 0)
			return ('A');
		else if (col == width - 1)
			return ('C');
		else
			return ('B');
	}
	else if (row == height - 1)
		if (col == 0)
			return ('C');
		else if (col == width - 1)
			return ('A');
		else
			return ('B');
	else
	{
		if (col == 0 || col == width - 1)
			return ('B');
		else
			return (' ');
	}
}
