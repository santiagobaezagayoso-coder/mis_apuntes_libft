/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:58:51 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 21:35:00 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*tmp;
	char		p;

	i = 0;
	p = (char)c;
	tmp = (char *)s;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == p)
			return (&tmp[i]);
		i++;
	}
	if (tmp[i] == p)
		return (&tmp[i]);
	return (NULL);
}