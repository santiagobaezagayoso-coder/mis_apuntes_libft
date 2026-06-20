#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
    {
        return (0);
    }

	while ( s1[i] == s2[i] && s1[i] != '\0' && i < n -1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


#include <stdio.h>

int main(void)
{
    int resultado;

    // Prueba 1: Palabras diferentes
    // 'a' es 97, 'o' es 111. La resta 97 - 111 debería dar -14.
    resultado = ft_strncmp("Hola", "Holo", 4);
    printf("Prueba 1 (Hola vs Holo, 4 letras): %d\n", resultado);

    // Prueba 2: Palabras iguales hasta el límite n
    // Aunque son diferentes al final, si solo miramos las 3 primeras ("Gat" vs "Gat"), son iguales.
    printf("Prueba 2 (Gato vs Gata, 3 letras): %d\n", ft_strncmp("Gato", "Gata", 3));

    return (0);
}