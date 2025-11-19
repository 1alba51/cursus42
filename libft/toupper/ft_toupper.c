// Esta función convierte la letra que damos como parámetro en mayúscula
// El prototipo de la función será:
// 			int	ft_toupper(int c);

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		c = c - 32;
	}
	return(c);
}

// 1. Creamos una condicional que cambie la letra a mayúscula si el parámetro dado es minúscula (97 - 122)
// 2. Devolvemos el parámetro

int	main(void)
{
	printf("a -> %c\n", ft_toupper('a'));
	return(0);
}
