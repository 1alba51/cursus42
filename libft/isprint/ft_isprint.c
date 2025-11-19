// Esta función devuelve 1 si el parámetro es un carácter imprimible (32 - 126)
// El prototipo de la función será:
//			int	ft_isprint(int c);

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return(1);
	}
}

// 1. Creamos una condicional que devuelva 1 si el parámetro es un valor imprimible (32 - 126)

int	main(void)
{
	printf("C -> %d\n", ft_isprint('C'));
	return(0);
}
