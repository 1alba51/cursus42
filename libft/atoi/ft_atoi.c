// Esta función convierte una cadena de caracteres a un entero.
// La función devuelve el valor convertido o 0 si el valor no se puede convertir.
//	- Ignora los espacios en blanco iniciales
//	- Deja de leer la serie de entrada en el primer caracter que no puede reconocer como parte de un número 
//	(incluyendo el carácter nulo)
//
// El prototipo de la función será:
// 			int	ft_atoi(const char *nptr);

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return(result * sign);
}

// 1. Inicializamos una variable que nos haga de contador
// 2. Otra variable que guarde el resultado
// 3. Y otra que controle si el número es positivo o negativo según el signo que lleve delante
// 4. Si el primer byte es un espacio en blanco lo ignoramos y pasamos al siguiente
// 5. Si nos encontramos con un signo lo ponemos positivo o negativo y pasamos al siguiente byte
// 6. Mientras que los caracteres sean valores numéricos los convertimos en enteros y pasamos al siguiente
// 7. Devolvemos el resultado multiplicado por el signo

int	main(void)
{
	char	str1[] = " -1231480";
	char	str2[] = "21034143";
	char	str3[] = "2394csodf";
	char	str4[] = "hola";

	int	result1 = ft_atoi(str1);
	int	result2 = ft_atoi(str2);
	int	result3 = ft_atoi(str3);
	int	result4 = ft_atoi(str4);
	printf("String: %s -> Entero: %d\n", str1, result1);
	printf("String: %s -> Entero: %d\n", str2, result2);
      	printf("String: %s -> Entero: %d\n", str3, result3);
	printf("String: %s -> Entero: %d\n", str4, result4);	
	return(0);
}
