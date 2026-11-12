/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:43:40 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/12 09:31:32 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	if (i == dstsize)
		return (dstsize + ft_strlen(src));
	j = ft_strlen(src);
	k = i;
	i += j;
	j = 0;
	if (dstsize > 0)
	{
		dstsize -= k;
		while (src[j] != '\0' && j + 1 < dstsize)
			dst[k++] = src[j++];
		dst[k] = '\0';
	}
	return (i);
}
