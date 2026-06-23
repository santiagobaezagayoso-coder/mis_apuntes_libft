/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:53:06 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 11:53:46 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ts;
	void	*ptr;

	ts = nmemb * size;
	ptr = malloc(ts);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, ts);
	return (ptr);
}
