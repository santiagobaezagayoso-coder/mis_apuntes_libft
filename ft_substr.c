/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:29:07 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/22 17:43:08 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	fill_new_string(const char *s, char *new_string, size_t len)
{
	int	i = 0;
	while (s[i] != '\0' && i < len)
	{
		new_string[i] = s[i];
		i++;
	}
	new_string[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_string;
	int		i;

	if (s == NULL || len == 0)
		return (NULL);
	s += start;
	s_len = ft_strlen(s);
	if (s_len < len)
	{
		new_string = malloc(s_len + 1);
		if (new_string == NULL)
			return (NULL);
	}
	else
	{
		new_string = malloc(len);
		if (new_string == NULL)
			return (NULL);
	}
	fill_new_string(s, new_string, len);
	return (new_string);
}


#include <stdio.h>

int main()
{
	char string[] = "viva#la@vida";

	printf("SUB_STRING: %s\n", ft_substr(string, 3, 20));
	return (0);
}

