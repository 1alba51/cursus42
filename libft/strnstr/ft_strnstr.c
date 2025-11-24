// Esta función localiza la primera aparición de una subcadena dentro de otra, 
// pero limitada a una cantidad específica de carateres de la cadena principal.
// La función devuelve:
// 	- Si little es un string vacío, devuelve big
// 	- Si little no se encuentra en big, devuelve NULL
// 	- Si little se encuentra en big, devuelve a partir de donde se encuentra little
// El prototipo de esta función será:
// 			char	*ft_strnstr(const char *big, const char *little, size_t len);

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (big[i] == little[i])
		{
			return((char *)big);	
		}
		i++;
	}
	if (*little == '\0')
	{
		return((char *)big);
	}
	return(NULL);
}

// 1. Inicializamos una variable que sirva de contador para recorrer los bloques de memoria
// 2. Creamos un bucle que se ejecute len veces comparando ambos strings
// 3. Si encontramos little en big, devolvemos big
// 4. Si little se encuentra vacío devolvemos big
// 5. Si no encontramos nada devolvemos NULL

int	main(void)
{
	char	largestring[] = "Foo Bar Baz";
	char	smallstring[] = "Ber";
	int	len = 7;
	char	*result;

	printf("Buscamos %s en el string %s en sus %d primeros caracteres\n", smallstring, largestring, len);
	result = ft_strnstr(largestring, smallstring, len);
	if (result != NULL)
	{
		printf("Se ha encontrado %s\n", result);
	}
	else
	{
		printf("No se ha encontrado\n");
	}
	return(0);	
}
