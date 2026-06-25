/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:56:03 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 21:57:38 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (!dest && !src)
	 	return (NULL);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (ptrs > ptrd)
		ft_memcpy(ptrd ,ptrs, n);
	else
	{
		while (n--)
			ptrd[n] = ptrs[n];
	}
	return (dest);
}
