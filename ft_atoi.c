#include "libft.h"

int atoi(const char *nptr)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;

	while (nptr[i] < 14 && nptr[i] > 8 || nptr[i] == ' ')
	{
		i++;
	}

	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
		{
			sign = -1;
		}
		i++;
	}

	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
