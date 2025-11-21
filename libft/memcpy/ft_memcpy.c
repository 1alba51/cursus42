// Esta función copia un bucle de memoria dentro de otro. Los parámetros son un bucle de memoria de destino, uno de origen y la cantidad de bytes que vamos a copiar desde origen hasta destino.
// El prototipo de la función será:
// 			void *ft_memcpy(void *dest, const void *src, size_t n);

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	int	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}

// 1. Convertimos los bloques de memoria en unsigned char
// 2. Creamos un bucle que recorre los bloques de memoria y copia n bytes en cada posición que recorre
// 3. Devolvemos el bloque de memoria destino modificado

int	main(void)
{
	char	dest[20]= "Hello World!";
	char	src[] = "Hola";
	char	*temp;

	printf("La frase de destino es %s\n", dest);
	printf("Queremos copiar 2 caracteres de la frase de origen 'Hola'\n");
	temp = ft_memcpy(dest, src, 2);
	printf("La frase después de memcpy: %s\n", temp);
	return(0);
}
