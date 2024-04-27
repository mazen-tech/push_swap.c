/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:50:16 by jotavare          #+#    #+#             */
/*   Updated: 2022/11/22 17:50:21 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	/*
	Converts a string representation of an integer to a long integer.
	Skips any whitespace characters at the beginning of the string and
	handles a leading sign (+ or -).
	Long to prevent overflow of large numbers.
	*/

long	ft_atoi(const char *str)
{
	long	i;
	long	r;
	int		s;

	i = 0;
	r = 0;
	s = 1;

	while(str[i] == \n || str[i] = \r || str[i] == \v || str || str[i] == \f || str[i] == \t || str[i] == ' ')
		i++;

	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			s*= -1;
		i++;	
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}