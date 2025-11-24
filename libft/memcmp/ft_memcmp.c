// Esta función compara n bytes del string1 con el string2 y devuelve la diferencia de los valores en ASCII.
// La función devuelve:
// 	- 0 si s1 y s2 son iguales
// 	- Un valor negativo si s1 es menor que s2
// 	- Un valor positivo si s1 es mayor que s2 
// El prototipo de la función será:
// 		int	ft_memcmp(const void *s1, const void *s2, size_t n);

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;
	size_t	i;

	i = 0;
	while (i < n )
	{
		if (str1[i] != str2[i])
		{
			return(str1[i] - str2[i]);
		}
		i++;
	}
	return(0);
}

// 1. Convertimos los parámetros en unsigned char para poder trabajar byte a byte y con valores positivos
// 2. Inicializamos un contador para poder compararlo con el límite de comparaciones (n)
// 3. Creamos un bulce que se ejecute n veces o menos comparando byte a byte
// 4. Si nos encontramos con dos bytes diferentes
// 5. Devolvemos la diferencia de sus valores en ASCII
// 6. Si ambos parámetros son iguales devolvemos 0

int	main(void)
{
	char	s1[] = "abcdefg";
	char	s2[] = "hola";
	size_t	n = 4;
	int	result;

	printf("Buscamos la diferencia entre '%s' y '%s' entre sus %ld primeros caracteres\n", s1, s2, n);
	result = ft_memcmp(s1, s2, n);
	printf("El resultado de la diferencia es %d\n", result);
	return(0);
}
