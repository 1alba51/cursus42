// Esta función devuelve 1 si el parámetro dado es un número (0 - 9), en caso contrario devuelve 0
// El prototipo de la función será:
// 			int	ft_isdigit(int c);

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	return(0);
}

// 1. Creamos una condicional que devuelva 1 si el parámetro dado se encuentra entre los valores 0 - 9
// 2. Si no se cumple devuleve 0

int	main(void)
{
	printf("5 -> %d\n", ft_isdigit('5'));
	printf("a -> %d\n", ft_isdigit('a'));
	return(0);
}
