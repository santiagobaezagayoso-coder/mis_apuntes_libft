#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void test_strdup(void)
{
	char *og = "Me gustan los tacos";
	char *clone;

	clone = ft_strdup(og);

	printf("OG : %s\n", og);
	printf("clone : %s\n", clone);
	free(clone);
}

void test_calloc(void)
{
	int *numeros;
	size_t i = 0;
	size_t q = 5;

	numeros = ft_calloc(q, sizeof(int));
	printf("%zu\n", q);
	while	(i < q)
	{
		printf("%d ", numeros[i]);
		i++;
	}

	free(numeros);
}

int main(void)
{
	test_strdup();
	test_calloc();
	return(0);
}
