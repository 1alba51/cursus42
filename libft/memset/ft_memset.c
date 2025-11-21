// Esta función sustituye/llena posiciones con un mismo carácter repetido.
// El prototipo de la función será:
// 			void *ft_memset(void *str, int c, size_t n);

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return(str);
}

// 1. Ya que sabemos que esta función debe trabajar con bloques de memoria debemos convertir el parámetro recibido a unsigned char porque necesitamos acceder byte a byte
// 2. Ya tenemos un puntero que apunta byte a byte, por lo que ahora debemos crear un bucle que debe ejecutarse n veces para rellenar las posiciones del puntero con el valor c
// 3. Finalmente devolvemos str ya modificado con los parámetros dados

int	main(void)
{
	char	str[20] = "Hello World!";

	printf("Esta es la frase original: %s\n", str);
	ft_memset(str, 'X', 4);
	printf("Sustituimos los 4 primeros caracteres por el caracter 'X'\n");
	printf("Esta es la frase modificada: %s\n", str);
	return(0);
}
