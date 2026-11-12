/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:32:46 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 16:56:54 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x1;
	unsigned char	*x2;

	i = 0;
	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	while (i < n)
	{
		if (x1[i] != x2[i])
			return (x1[i] - x2[i]);
		i++;
	}
	return (0);
}
