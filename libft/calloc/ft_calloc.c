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

// 1. Creamos una variable que guarde el valor del resultado que devuelva la función malloc()
// 2. Esta va a calcular el tamaño que tendrán los elementos dados, por lo que es igual al número de elementos multiplicado por el tamaño de estos
// 3. Llamamos a la función malloc()
// 4. Si el resultado es 0 devuelve NULL
// 5. Recorremos el bloque de memoria sin superar su tamaño total
// 6. Añadimos 0 hasta rellenarlo
// 7. Devolvemos los elementos con valorlos elementos con valor 0 cada unoo

int	main(void)
{
	size_t	num = 3;
	size_t	len = sizeof(int);
	int	*ptr;

	ptr = ft_calloc(num, len);
	printf("Calloc: %d %d %d\n", ptr[0], ptr[1], ptr[2]);
	free(ptr);
	return(0);
}
