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
	size_t	len;
	size_t	i;
	char	*dst;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	dst = malloc(len + 1);
	if (dst == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// 1. Calcular la longitud del string original sin contar \0
// 2. Reservamos memoria con malloc() para longitud + 1 (\0)
// 3. Comprobamos si malloc() devuelve NULL
// 4. Copia caracteres incluyendo el \0

int	main(void)
{
	char	*newstring;

	newstring = ft_strdup("Hello World!");
	printf("Copia 1: %s\n\n", newstring);
	free(newstring);

	newstring = ft_strdup("");
	printf("Copia 2: %s\n\n", newstring);
	free(newstring);

	newstring = ft_strdup("A");
	printf("Copia 3: %s\n\n", newstring);
	free(newstring);

	return(0);
}
