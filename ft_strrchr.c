#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	unsigned char *ptr;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >=  0)
	{
		if (s[i] == (char)c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i--;
	}
	return (0);
}
