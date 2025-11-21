// Esta función devuelve un puntero hacia la última posición en la que se encuentra el carácter c en el string s.
// El prototipo de la función será:
// 			char	*ft_strrchr(const char *s, int c);

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*start = s;

	while (*s)
	{
		s++;
	}
	while (s >= start)
	{
		if (*s == c)
		{
			return((char *)s);
		}
		s--;
	}
	if (c == '\0')
	{
		return((char *)s);
	}
	return(NULL);
}

// 1. Declaramos una variable que nos servirá para guardar el punto de inicio del string
// 2. Creamos un bucle que recorra hacia adelante el string hasta llegar a su última posición
// 3. Como nos encontramos al final del string, creamos otro bucle que se recorrerá a la inversa
// 4. En cuanto coincida el caracter con la posición en la que se encuentra, imprimimos su posición.
// 5. Si el carácter es nulo imprimimos la posición
// 6. Si no lo encuentra imprimimos NULL 

int	main(void)
{
	char	s[] = "Hello World!";
	int	c = 'H';
	char	*result;

	printf("Debemos encontrar el primer carácter %c en el string %s\n", c, s);
	result = ft_strrchr(s, c);
	printf("El primer caracter %c encontrado en el string se encuentra en la posición %s\n", c, result);
	return(0);
}
