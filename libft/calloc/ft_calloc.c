// Esta función reserva espacio de almacenamiento para una matriz de elementos num cada uno de ellos de longitud de tamaño bytes.
// Proporciona a todos los bits de cada elemento un valor inicial de 0
// Tomamos como parámetros el número de elementos y el tamaño de cada elemento
// Devuelve un puntero al espacio reservado o NULL si falla (si no hay memoria disponible)
// Para implementar esta función debo usar la función malloc()
// El prototipo de la función será:
// 			void	*ft_calloc(size_t nmemb, size_t size);

#include <stdio.h>
#include <malloc.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
	{
		return(NULL);
	}
	size_t	total_bytes;
	void	*ptr;
	size_t	i;

	total_bytes = nmemb * size;
	i = 0;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return(NULL);
	}
	while (i < total_bytes)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return((unsigned char *)ptr);
}

int	main(void)
{
	size_t	num = 0;
	size_t	len = sizeof(int);
	int	*ptr;

	if (ptr == NULL)
	{
		printf("Error: no hay memoria disponible");
	}
	else
	{
		ptr = ft_calloc(num, len);
		printf("Calloc: %d %d %d\n", ptr[0], ptr[1], ptr[2]);
	}
	free(ptr);
	return(0);
}
