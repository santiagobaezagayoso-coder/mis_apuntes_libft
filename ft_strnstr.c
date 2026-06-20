#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t wl;

	j = 0;
	i = 0;
	wl = 0;

	while (little[wl] != '\0')
	{
		wl++;
	}

	while (i + j < len - 1)
	{
		while (big[i] != little[i])
		{
			i++;
		}
		while (big[i] == little[i] && big[i] != '\0')
		{
			j++;
			i++;
		}
		if (wl == j)
		{
			return (&big[i - j]);
		}
	}
}

#include <stdio.h>

void main(void)
{
	char *big = "HolaMundo";
	
	printf("%s\n", ft_strnstr(big, "", 5));
	printf("%s\n", ft_strnstr(big, "Mundo", 9));
	printf("%s\n", ft_strnstr(big, "Mundo", 5));
	printf("%s\n", ft_strnstr(big, "Zanahoria", 9));
	printf("%s\n", ft_strnstr(big, "Mundo", 50));
	
	return (0);

}
