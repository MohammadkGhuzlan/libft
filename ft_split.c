/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghuzlan <mghuzlan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:07:00 by mghuzlan          #+#    #+#             */
/*   Updated: 2026/10/11 17:00:46 by mghuzlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**free_array(char **strs, size_t j)
{
	while (j > 0)
	{
		j--;
		free(strs[j]);
	}
	free(strs);
	return (NULL);
}

static char	*mallc(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**fill_words(char **strs, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		strs[j] = mallc(&s[i], len);
		if (!strs[j])
			return (free_array(strs, j));
		j++;
		i += len;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	return (fill_words(strs, s, c));
}
