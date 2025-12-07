// Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de 's1' y 's2'.
// PARÁMETROS: 
// s1: la primera string
// s2: la string a añadir a 's1'
// DEVUELVE:
// la nueva string. NULL si falla la reserva de memoria
// El prototipo de la función será:
//			char *ft_strjoin(char const *s1, char const *s2);

#include <stdio.h>
#include <malloc.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len_s;

	len_s = 0;
	while (s[len_s])
	{
		len_s++;
	}
	return (len_s);
}

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*newstring;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	newstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstring == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		newstring[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstring[i + j] = s2[j];
		j++;
	}
	newstring[i + j] = '\0';
	return (newstring);
}

// 1. Comprobamos si s1 o s2 son nulos
// 2. Reservamos la memoria para el tamaño de cada string más el nulo del final
// 3. Copiamos los caracteres de s1
// 4. Copiamos los caracteres de s2 después de s1
// 5. Cerramos el string con un nulo
// 6. Devolvemos el puntero con el nuevo string

int	main(void)
{
	char	*newstring;

	newstring = ft_strjoin("Hello", " World");
	printf("%s\n", newstring);
	free(newstring);
	return (0);	
}
