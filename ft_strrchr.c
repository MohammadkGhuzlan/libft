/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:12:17 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 16:56:51 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = -1;
	while (s[++i] != '\0')
	{
	}
	j = i;
	while (j >= 0)
	{
		if ((unsigned char)s[j] == (unsigned char)c)
		{
			return ((char *)&s[j]);
		}
		j--;
	}
	return (NULL);
}
