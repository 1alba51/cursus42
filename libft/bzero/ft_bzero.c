// Esta función sustituye/llena con nulos.
// El prototipo de la función será:
// 			void	ft_bzero(void *s, size_t n);

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	int	i;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// 1. Convertimos a unsigned char el parámetro dado para poder recorrerlo byte a byte
// 2. Recorremos el puntero llenándolo con bytes nulos '\0' n veces
// 3. Esta función no devuelve nada, si no que modifica la memoria

int	main(void)
{
	char	str[20] = "Hello World!";

	printf("Esta es la frase original: %s\n", str);
	ft_bzero(str, 5);
	printf("Después de aplicar bzero (desde la posición 5): %s\n", &str[5]);
	printf("Si imprimimos byte a byte para ver los nulos: ");
	for (size_t i = 0; i < 12; i++)
	{
		if (str[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", str[i]);
	}
	return(0);
}
