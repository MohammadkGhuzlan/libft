/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:28:24 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/12 09:48:54 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	rr(const char haystack, const char needle, size_t len, size_t k)
{
	return ((haystack == needle) && (k < len) && (haystack != '\0'));
}

static	void	zero(size_t*j, size_t *k, size_t i)
{
	*j = 0;
	*k = i;
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i <= len && (haystack [i + ft_strlen(needle) - 1]) != '\0')
	{
		if (haystack[i] == needle[0])
		{
			zero (&j, &k, i);
			while (rr(haystack[k], needle[j], len, k))
			{
				j++;
				k++;
			}
		}
		i++;
		if (needle[j] == '\0')
			return ((char *) &haystack[i - 1]);
	}
	return (NULL);
}
