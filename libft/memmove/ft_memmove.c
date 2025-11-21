// Esta función copia un bucle de memoria dentro de otro. Los parámetros son un bucle de memoria de destino, uno de origen y la cantidad de bytes que vamos a copiar desde origen hasta destino. Esta función controla el solapamiento por lo que si el destino es mayor que el origen, copiaremos los bytes de derecha a izquierda, pero si el destino es menor que el origen se copiarán de izquierda a derecha.
// El prototipo de la función será:
// 			void *ft_memmove(void *dest, const void *src, size_t n);

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];	
		}
	}
	return(dest);
}

// 1. Convertimos dest y src a unsigned char* para trabajar byte a byte
// 2. Comparamos las posiciones de dest y src en memoria
// 3. Si dest < src: copiamos de izquierda a derecha (0 → n-1)
// 4. Si dest >= src: copiamos de derecha a izquierda (n-1 → 0) para evitar sobrescribir datos
// 5. Devolvemos el puntero dest original

int	main(void)
{
	char	src[12] = "Hello World!";

	printf("La frase original es %s\n", src);
	ft_memmove(src + 3, src, 4);
	printf("La frase después de memmove es %s\n", src);
	return(0);
}
