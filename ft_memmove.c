/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:56:03 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 12:19:27 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	move(unsigned char *ptrd, unsigned char *ptrs, size_t n)
{
	size_t	i;

	i = 0;
	if (ptrd > ptrs)
	{
		while (i < n)
			i++;
		while (i != 0)
		{
			ptrd[i - 1] = ptrs[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (!dest && !src)
		return (dest);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	move(ptrd, ptrs, n);
	return (dest);
}
