// Esta función busca en n bytes la primera aparción del caracter c en el string s.
// El prototipo de la función será:
// 			void	*ft_memchr(const void *s, int c, size_t n);

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr = (unsigned char *)s;
	size_t	i;

	i = 0;
	while (i < n)
	{
		if(ptr[i] == (unsigned char)c)
		{
			return(&ptr[i]);
		}
		i++;
	}
	return(NULL);
}

// 1. Convertimos void * en unsigned char * para poder trabajar byte a byte
// 2. Inicializamos un contador para recorrer el puntero
// 3. Creamos un bucle que recorra el puntero n veces
// 4. Si nos encontramos con el caracter que buscamos imprimimos a partir de su posición
// 5. Si no lo encontramos, pasamos al siguiente byte
// 6. Si despues de n veces no encontramos nada, devolverá NULL

int	main(void)
{
	char	str[] = "Hello World!";
	int	c = 'W';
	size_t	n = 3;
	char	*result;

	printf("Debemos buscar el carácer %c en los primeros %ld caracteres del string %s\n", c, n, str);
	result = ft_memchr(str, c, n);
	if (result != NULL)
	{
		printf("Se ha encontrado %s\n", result);	
	}
	else
	{
		printf("No se ha encontrado el caracter\n");
	}
	return(0);
}
