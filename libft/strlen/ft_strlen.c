// Esta función devuelve la longitud del string al que apunta el puntero dado
// El prototipo de la función será:
//			int	ft_strlen(char *str);

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;
	
	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return(length);
}

// 1. Declaramos una variable que servirá para almacenar la cantidad de bytes que contiene el puntero
// 2. Creamos un bucle que recorra el puntero byte por byte y vaya sumando a la variable longitud
// 3. Cuando termine de recorrer el puntero devuelve la variable que ha almacenado la longitud 

int	main(void)
{
	char	*str;
	int	length;

	str = "Hello World!";
	length = ft_strlen(str);
	printf("Hello World! -> %d\n", length);
	return(0);
}
