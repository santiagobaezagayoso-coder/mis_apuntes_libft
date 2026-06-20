#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;

	// Paso 1: Medir
	while (dst[dst_len] != '\0' && dst_len < dstsize) // <-- FÍJATE AQUÍ
		dst_len++;
	while (src[src_len] != '\0') 
		src_len++;
	
	// Paso 2: Si hay espacio, copiamos
	if (dstsize > dst_len) // Tú pusiste while, debe ser if
	{
		while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
		{
			dst[dst_len + i] = src[i]; // Lo pusiste al revés
			i++;
		}
		dst[dst_len + i] = '\0'; // Faltaba cerrar
	}
	
	// Paso 3: Retornar
	return (dst_len + src_len);
}
