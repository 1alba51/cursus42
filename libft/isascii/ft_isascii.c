// Esta función devuelve 1 si el parámetro está dentro del rango ASCII (0 - 127)
// El prototipo de la funcíon será:
// 			int	ft_isascii(int c);

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return(1);
	}
}

// 1. Creamos una condicional que devuelva 1 si el parámetro se encuentra dentro del rango ASCII 0 - 127

int	main(void)
{
	printf("b -> %d\n", ft_isascii('b'));
	return(0);
}
