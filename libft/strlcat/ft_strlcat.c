// Esta función concatena una cadena de origen a una cadena de destino, incluyendo el tamaño del búfer de destino como argumento.
// Copia la cadena de origen al final de la cadena de destino hasta que el búfer está lleno o se alcanza el carácter nulo de la cadena de origen.
// La función devuelve la longiud que habría tenido la cadena si no hubiera habido limitación de tamaño (longitud de dst original más la longitud de src).
// El prototipo de la función será:
// 			size_t	ft_strlcat(char *dst, const char *src, size_t size);

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;

	dst_length = 0;
	src_length = 0;
	i = 0;
	while (dst[dst_length])
	{
		dst_length++;
	}
	while (src[src_length])
	{
		src_length++;
	}
	if (size <= dst_length)
	{
		return(size + src_length);
	}
}

// 1. Calculamos la longitud de la cadena de origen y la de destino
// 2. 
