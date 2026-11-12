/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:59:32 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 16:59:40 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white(char x)
{
	return ((x == '\t') || (x == '\n')
		|| (x == '\v') || (x == '\f') || (x == '\r') || (x == ' '));
}

static int	sign(const char x, int *e)
{
	if (x == '-')
	{
		*e = 1;
		return (1);
	}
	else if (x == '+')
	{
		*e = 0;
		return (2);
	}
	*e = 0;
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	e;

	i = 0;
	num = 0;
	while (white(nptr[i]))
		i++;
	if (sign(nptr[i], &e))
		i++;
	while (nptr[i] != '\0')
	{
		if ((nptr[i] < '0' || nptr[i] > '9'))
			break ;
		num *= 10;
		if ((nptr[i] > '0' && nptr[i] <= '9'))
			num += nptr[i] - 48;
		i++;
	}
	if (e == 1)
		return (-num);
	else
		return (num);
}
