/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 07:42:52 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 10:38:41 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	string_cpy(char const *s1, char const *s2, char *new_string)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_string[i] = s2[j];
		j++;
		i++;
	}
	new_string[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new_string;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_string = malloc(len1 + len2 + 1);
	if (new_string == NULL)
		return (NULL);
	string_cpy(s1, s2, new_string);
	return (new_string);
}
/*
#include <stdio.h>
int main()
{
	char string1[] = "";
	char string2[] = "";

	printf("New string : %s\n", ft_strjoin(string1, string2));
	return(0);
}
*/
