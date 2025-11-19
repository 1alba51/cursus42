// Esta función devuelve 1 se el parámetro dado es una letra (tanto si es mayúscula como minúscula), si no lo es devuelve 0
// El prototipo de la función será:
// 		int	ft_isalpha(int c);

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return(1);
	}
	return(0);
}

// 1. Creamos una condicional que devuelva 1 si el parámetro dado se encuentra entre los valores A - Z o a - z
// 2. Si no se cumple devuleve 0

int	main(void)
{
	printf("A -> %d\n", ft_isalpha('A'));
	printf("5 -> %d\n", ft_isalpha('5'));
	return(0);
}
