// Esta función reserva (con malloc (3)) y devuelve una substring de la string 's'.
// La substring empieza desde el índice 'start' y tiene una longitud máxima 'len'.
// s: la string desde la que crear la substring
// start: el índice del caracter en 's' desde el que empezar la substring
// len: la longitud máxima de la substring
// El prototipo de la función será:
// 		char	*ft_substr(char const *s, unsigned int start, size_t len);

#include <stdio.h>
#include <malloc.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	n;
	char	*empty;
	char	*substring;

	len_s = 0;
	n = 0;
	// Comprobamos si es nulo
	if (s == NULL)
	{
		return (NULL);
	}
	// Calculamos longitud
	while (s[len_s])
	{
		len_s++;
	}
	// Caso especial
	if (start >= len_s)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	// Cuantos caracteres se van a copiar
	
	// Reserva de memoria
	substring = malloc(n + 1);
	// Copiar caracteres
	while (n <= s[start])
	{
		
	}
	// Cerramos string
	substring[n] = '\0';
	// Devolvemos
	return (substring);
}

// 1. Debemos comprobar si s es nulo y calculamos la longitud de s
// 2. Controlamos el caso especial en el que start >= longitud de s
// 3. Calculamos cuantos caracteres vamos a copiar (mínimo entre (len_s - start) y len)
// 4. Reservamos memoria para n caracteres + 1
// 5. Copiamos n caracteres desde start en la nueva string
// 6. Cerramos la string añadiendo un nulo al final
// 7. Devolvemos el puntero de la nueva string

int	main(void)
{
	char	s[] = "Hello World";
	char	*result;

	printf("El string original: '%s'n", s);
	result = ft_substr(s, 4, 8);
	printf("El substring: '%s'\n", result);
	fre(result);
	return(0);
}
