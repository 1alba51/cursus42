// Esta función reserva espacio de la memoria para una copia de serie llamando a malloc().
// El parámetro dado para esta función debe contener un nulo que marque el final de la serie.
// Devuelve un puntero al espacio de almacenamiento que contiene la serie copiada.
// Si no puede reservar almacenamiento la función devuelve NULL.
// El prototipo de la función será:
// 				char	*ft_strdup(const char *s);

#include <stdio.h>
#include <malloc.h>

char	*ft_strdup(const char *s)
{
	size_t	total_bytes;
	char	*ptr;
	size_t	i;

	total_bytes = 
}

// 1. 

int	main(void)
{
	char	original[] = "Hello World!";
	char	*newstring;

	printf("Original: %s\n", original);
	newstring = ft_strdup(original);
	printf("Copia: %s\n", newstring);
	free(newstring);
	return(0);
}
