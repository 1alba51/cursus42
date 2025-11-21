// Esta función compara dos cadenas de caracteres con un límite de n caracteres.
// La función devuelve un int basado en la diferencia de los valores ASCII de los caracteres: 
// - Devuelve 0 si son iguales
// - Un valor negativo si s1 es menor que s2
// - Un valor positivo si s1 es mayor que s2
// El prototipo de la función será:
// 			int	ft_strncmp(const char *s1, const char *s2, size_t n);

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}	
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// 1. Declaramos una variable que hará de contador para recorrer el string
// 2. Creamos un bucle que se PARA si alguna de estas tres condiciones es falsa:
// 	- i < n, será el límite que tengamos para comprobar caracteres
// 	- s1[i] != '\0', marcará el final de la cadena
// 	- s1[i] == s2[i], igualdad de caracteres
// 3. Pasamos al siguiente carater
// 4. Devolvemos la diferencia entre los valores ASCII de los caracteres
// (Con unsigned garantizamos que la comparación siempre sea positiva)

int	main(void)
{
	char	s1[] = "abcdef";
	char	s2[] = "abdef";
	int	n = 2;
	int	resultado;
	
	resultado = ft_strncmp(s1, s2, n);
	printf("El resultado de la diferencia es %d\n", resultado);
	return(0);
}
