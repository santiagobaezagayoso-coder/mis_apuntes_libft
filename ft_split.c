/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:07:50 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 22:20:34 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*free_matrix(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**fill_matrix(char const *s, char c, char **split)
{
	size_t	i;
	size_t 	j;
	size_t	word_start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{   
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			word_start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			split[j] = ft_substr(s, word_start, (i - word_start));
			if (!split[j])
				return (free_matrix(split, j));
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (fill_matrix(s, c, split));
}
