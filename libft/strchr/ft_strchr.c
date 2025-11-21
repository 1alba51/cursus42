// Esta función devuelve un puntero hacia la primera posición en la que se encuentra el caracter c en el string s.
// El prototipo de la función será:
// 			char	*ft_strchr(const char *s, int c);

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return((char *)s);
	}
	return(NULL);
}

// 1. Recorremos la cadena con un bucle
// 2. Si nos encontramos con el carácter c imprimimos la posición de memoria en la que se encuentra el carácter que buscábamos, si no lo encontramos pasamos a la siguiente posición
// 3. Si el carácter que le pedimos que busque es el nulo, devolvemos la posición donde se encuentra
// 4. Si no encontramos nada devolvemos NULL

int	main(void)
{
	char	s[] = "Hello World!";
	int	c = 'e';
	char	*result;

	printf("Debemos encontrar el primer carácter %c en el string %s\n", c, s);
	result = ft_strchr(s, c);
	printf("El primer caracter %c encontrado en el string se encuentra en la posición %s\n", c, result);
	return(0);
}
