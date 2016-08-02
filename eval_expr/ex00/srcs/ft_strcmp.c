/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkoutrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:11:03 by nkoutrel          #+#    #+#             */
/*   Updated: 2016/07/19 19:11:05 by nkoutrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	char *index_s1;
	char *index_s2;

	index_s1 = s1;
	index_s2 = s2;
	if (*index_s1 != *index_s2)
		return (*index_s1 - *index_s2);
	if (*index_s1 == '\0' && *index_s2 == '\0')
		return (0);
	s1++;
	s2++;
	return (ft_strcmp(s1, s2));
}
