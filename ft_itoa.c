/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:28:47 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 16:59:57 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int x)
{
	int	i;

	if (x == -2147483648)
		return (11);
	if (x == 0)
		return (1);
	i = 0;
	if (x < 0)
	{
		i++;
		x *= -1;
	}
	while (x > 0)
	{
		i++;
		x /= 10;
	}
	return (i);
}

static	void	ft_putnbr(int n, char *str)
{
	char	xx[100];
	int		x;
	int		i;
	int		s;

	i = 0;
	s = 0;
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		str[0] = '-';
		s++;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		x = n % 10;
		n = n / 10;
		xx[i++] = x + 48;
	}
	while (i > 0)
	{
		str[s++] = xx[--i];
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = intlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str[10] = '8';
		n /= 10;
		ft_putnbr(n, str);
	}
	else
		ft_putnbr(n, str);
	str[len] = '\0';
	return (str);
}
