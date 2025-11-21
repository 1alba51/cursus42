// Esta función copia n - 1 bytes (ya que debe añadir el nulo al final) de src en dst.
// Nos devuelve la longitud de src al completo para que sepamos si ha habido truncamiento o no. Para ello debemos calcular la longitud de src primero
// El prototipo de la función será:
// 			size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (src[length])
	{
		length++;
	}
	if (size == 0)
	{
		return(length);	
	}
	else if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return(length);
}

// 1. Calculamos primero la longitud de src
// 2. Si size == 0, no copiamos nada, solo devolvemos la longitud
// 3. Si size > 0, copiamos un máximo de size - 1 caracteres de src en dst y 
// añadimos '\0' al final de dst
// 4. Devolvemos la longitud de src

int	main(void)
{
	char	src[] = "Hello World!";
	char	dst[0];
	size_t	length;

	length = ft_strlcpy(dst, src, 0);
	printf("El tamaño es: %ld\n", length);
	printf("El contenido copiado en dst es: %s\n", dst);
	return(0);
}
