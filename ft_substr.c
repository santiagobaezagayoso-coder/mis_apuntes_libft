/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:29:07 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 20:43:07 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

// void	fill_new_string(const char *s, char *new_string, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0' && i < len)
// 	{
// 		new_string[i] = s[i];
// 		i++;
// 	}
// 	new_string[i] = '\0';
// }

// // char	*ft_substr(char const *s, unsigned int start, size_t len)
// // {
// // 	size_t	s_len;
// // 	char	*new_string;

// // 	if (s == NULL || !len)
// // 		return (NULL);
// // 	s += start;
// // 	s_len = ft_strlen(s);
// // 	if (start + 1 > s_len)
// // 	{
// // 		new_string = malloc(1);
// // 		if (new_string == NULL)
// // 			return (NULL);
// // 		new_string[0] = '\0';
// // 		return (new_string);
// // 	}
// // 	if (s_len < len)
// // 		new_string = malloc(s_len + 1);
// // 	else
// // 		new_string = malloc(len);
// // 	if (new_string == NULL)
// // 		return (NULL);
// // 	fill_new_string(s, new_string, len);
// // 	return (new_string);
// // }
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	s_len;
// 	char	*new_string;

// 	s_len = ft_strlen(s);
// 	if (s == NULL || !len || (len + start > s_len))
// 		return (NULL);
// 	s += start;
	
// 	if (start + 1 > s_len)
// 	{
// 		new_string = malloc(1);
// 		if (new_string == NULL)
// 			return (NULL);
// 		new_string[0] = '\0';
// 		return (new_string);
// 	}
// 	if (s_len < len)
// 		new_string = malloc(s_len + 1);
// 	else
// 		new_string = malloc(len);
// 	if (new_string == NULL)
// 		return (NULL);
// 	fill_new_string(s, new_string, len);
// 	return (new_string);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	slen;

	i = 0;
	if(!s)
		return (NULL);
	slen = ft_strlen(s);
	if(start >= slen)
		slen = 0;
	else if(slen - start < len)
		slen = slen - start;
	else 
		slen = len;
	new = malloc(slen + 1);
	if (!new)
		return (NULL);
	while (i < slen)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main()
{
	char string[] = "viva#la@vida";

	printf("SUB_STRING: %s\n", ft_substr(string, 2,7));
	return (0);
}
*/
