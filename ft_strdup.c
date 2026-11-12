/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:26:37 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 16:58:37 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*str;

	i = -1;
	len = 0;
	while (s[len] != '\0')
		len++;
	str = malloc (len + 1);
	if (str != NULL)
	{
		while (++i <= len)
		{
			str[i] = s[i];
		}
		return (str);
	}
	return (NULL);
}
