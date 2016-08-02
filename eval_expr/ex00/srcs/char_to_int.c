/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 11:53:07 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/31 11:53:08 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0'
			&& ((str[i] <= '9' && str[i] >= '0') || (str[0] == '-' && i == 0)))
	{
		i++;
	}
	return (i);
}

int	ten_power(int a)
{
	int	result = 1;
	int	count;

	count = 0;
	while (count < a)
	{
		result *= 10;
		count++;
	}
	return (result);
}

int	to_int(char *str)
{
	int	result;
	int	count;
	int	i;

	count = get_length(str);
	result = 0;
	i = (str[0] == '-') ? 1 : 0;
	while (i < count)
	{
		result += (str[i] - 48) * ten_power(count - i - 1);
		i++;
	}
	if (str[0] == '-')
	{
		result *= -1 ;
	}
	return (result);
}
