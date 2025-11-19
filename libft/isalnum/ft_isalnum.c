// Esta función devuelve 1 si el parámetro dado es un número o una letra (minúscula o mayúscula), si no, devuelve 0
// El prototipo de la función será:
// 			int	ft_isalnum(int c);

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return(1);
	}
	return(0);
}

// 1. Creamos una condicional que devuelva 1 si el parámetro dado se encuentra entre los valores A - Z, a - z o 0 - 9
// 2. Si no se cumple devuleve 0

int	main(void)
{
	printf("5 -> %d\n", ft_isalnum('5'));
	printf("a -> %d\n", ft_isalnum('a'));
	printf("@ -> %d\n", ft_isalnum('@'));
	return(0);
}
