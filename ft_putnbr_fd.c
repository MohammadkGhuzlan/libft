/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:29:23 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 17:00:40 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	no(int *n, int fd)
{
	if (*n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*n = 0;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	xx[100];
	int		x;
	int		i;

	i = 0;
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n == 0)
		write(fd, "0", 1);
	no(&n, fd);
	while (n > 0)
	{
		x = n % 10;
		n = n / 10;
		xx[i++] = x + 48;
	}
	while (i > 0)
	{
		write(fd, &xx[--i], 1);
	}
}
