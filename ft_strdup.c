/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:50:13 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 11:50:42 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	void	*ptr;

	size = ft_strlen(s);
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy((char *)ptr, s, size + 1);
	return (ptr);
}
