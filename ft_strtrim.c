/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:07:04 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 15:07:08 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>

#include "libft.h"
#include <stddef.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}


/*char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		e;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{	
			i++;
			j = -1;
		}
		j++;
	}
	j = 0;
	e = ft_strlen(s1) - 1;
	while (set[j] != '\0')
	{
		if (s1[e] == set[j])
		{
			e--;
			j = -1;
		}
		j++;
	}
	return (ft_substr(s1, i, ((e - i) + 1));
}
int main()
{
    char string[] = "xyxHOLAyyx";
    char set[] = "xy";

    // Solo llamamos a la función para ver los números de dentro
    printf("%s\n", ft_strtrim(string, set)); 
    return(0);
}*/
	
