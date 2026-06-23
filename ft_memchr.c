/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:03:37 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 12:04:53 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (i < n - 1)
	{
		if (ptr[i] == c2)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (0);
}
