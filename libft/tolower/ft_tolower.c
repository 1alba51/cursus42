// Esta función convierte el parámetro dado en una letra minúscula
// El prototipo de la función será:
// 			int	ft_tolower(int c);

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return(c);
}

// 1. Creamos una condicional que se cumpla si el parámetro dado es una letra en mayúsculas
// 2. Si es mayúscula la convertimos en minúscula
// 3. Devolvemos el parámetro

int	main(void)
{
	printf("B -> %c\n", ft_tolower('B'));
	return(0);
}
